#include "Truckloads.h"
#include <iostream>
#include "Reverser.h"
#include "EfficientTruckloads.h"

int main() {
  Truckloads truck;
  int size = 5; 
  int crates = 1024;
  int result = truck.numTrucks(crates,size);
  std::cout << result << std::endl;

  Reverser reverse;
  int value = 12345;
  int result1= reverse.reverseDigit(value);
  std::cout << result1 << std::endl;
  std::string name = "0";
  std::string result2 = reverse.reverseString(name);
  std::cout << result2 << std::endl;

  EfficientTruckloads trucks;
  int result3 = trucks.numTrucks(5,1024);
  std::cout << result3 << std::endl;
}