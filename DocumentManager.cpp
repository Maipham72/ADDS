#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
  if (nameIDs.count(id) == 0) {
    nameIDs[id] = name;
    limits[id] = license_limit;
    ids.push_back(id);
    copies.push_back(0);
  }
}

void DocumentManager::addPatron(int patronID) {
  patrons.push_back(patronID);
}

int DocumentManager::search(std::string name) {
  for (auto docs: nameIDs) {
    if (docs.second == name) {
      return docs.first;
    }
  }
  return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
  for (int i = 0; i < ids.size(); i++) {
    if (ids[i] == docid) {
      if (copies[i] < limits[docid]) {
        for (int j = 0; j < patrons.size(); j++) {
          if (patrons[j] == patronID) {
            copies[i]++;
            return true;
          }
        }
      }
      break;
    }
  }
  return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
  for (int i=0; i < ids.size(); i++) {
    if (ids[i] == docid && copies[i] > 0) {
      copies[i]--;
      break;
    }
  }
}