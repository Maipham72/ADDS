#include "Truckloads.h"
#include <iostream>
#include "Reverser.h"

int main() {
  Truckloads truck;
  int size = 5; 
  int crates = 1024;
  int result = truck.numTrucks(crates,size);
  std::cout << result << std::endl;

  Reverser reverse;
  int value = 1234;
  int result1= reverse.reverseDigit(value);
  std::cout << result1 << std::endl;
  std::string name = "0";
  std::string result2 = reverse.reverseString(name);
  std::cout << result2 << std::endl;
}