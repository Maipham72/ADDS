#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

class DocumentManager {
  private:

  std::unordered_map<int, int> limits; //store ID and limits

  std::vector<int> patrons; //store patrons

  std::unordered_map<int, std::string> nameIDs; //store document name and id

  std::vector<int> ids;
  std::vector<int> copies;

  public:
  
  void addDocument(std::string name, int id, int license_limit);

  void addPatron(int patronID);

  int search(std::string name);

  bool borrowDocument(int docid, int partronID);

  void returnDocument(int docid, int patronID);

};

#endif