#include "BigNumCalc.h"

BigNumCalc::BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
  std::list<int> numList;
  bool zero = true;
  
  for (int i = 0; i< numString.length(); i++) {
    if (numString[i] != '0') {
      zero = false;
    }

    if (!zero) {
      numList.push_back(numString[i] - '0');
    }
  }

  if (numList.empty()) {
    numList.push_back(0);
  }

  return numList;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
  std::list<int> add;
  int carry = 0;

  while (num1.size() < num2.size()) {
    num1.push_front(0);
  }
  
  while (num2.size() < num1.size()) {
    num2.push_front(0);
  }

  auto i1 = num1.rbegin();
  auto i2 = num2.rbegin();

  while (i1 != num1.rend()) {
    int digit1 = *i1;
    int digit2 = *i2;

    int sum = digit1 + digit2 + carry;
    carry = sum/10;
    add.push_front(sum%10);
    i1++;
    i2++;
  }

  if (carry >0) {
    add.push_front(carry);
  }

  return add;

  // while (!num1.empty() || !num2.empty()) {
  //   int sum = carry;
  //   if (!num1.empty()) {
  //   sum = sum + num1.back();
  //   num1.pop_back();
  //   }
  //   if (!num2.empty()) {
  //     sum = sum + num2.back();
  //     num2.pop_back();
  //   }

  //   carry = sum/10;
  //   add.push_front(sum%10);
  // }

  // return add;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
  std::list<int> subtract;
  int carry = 0;

  while(num1.size() > num2.size()) {
    num2.push_front(0);
  }
  auto it1 = num1.rbegin();
  auto it2 = num2.rbegin();

  while (it1 != num1.rend()) {
    int digit1 = *it1;
    int digit2 = *it2;

    int diff = digit1 - digit2 - carry;

    if(diff < 0) {
      diff += 10;
      carry = 1;
    } else {
      carry = 0;
    }

    subtract.push_front(diff);
    it1++;
    it2++;
  }

  while(!subtract.empty() && subtract.front() == 0) {
    subtract.pop_back();
  }

  if (subtract.empty()) {
    subtract.push_back(0);
  }

  return subtract;


  // while (num1.empty() != false || num2.empty() != false) {
  //   int x = carry;

  //   if (num1.empty() != false) {
  //     x = x + num1.back();
  //     num1.pop_back();
  //   }

  //   int y = 0;
  //   if (num2.empty() != false) {
  //     y = y + num2.back();
  //     num2.pop_back();
  //   }

  //   if (x<y) {
  //     x = x+10;
  //     carry = 1;
  //   } else {
  //     carry = 0;
  //   }

  //   subtract.push_front(x-y);
  // }

  // while (subtract.empty() != false && subtract.front() == 0) {
  //   subtract.pop_front();
  // }

  // if (subtract.empty()) {
  //   subtract.push_back(0);
  // }

  // return subtract;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
  std::list<int> multiply;
  int carry = 0;

  if (num1.empty() == true || num2.empty() == true) {
    multiply.push_back(0);
    return multiply;
  }

  int digit2 = num2.front();

  if (digit2 == 0) {
    multiply.push_back(0);
    return multiply;
  }

  for (auto it1 = num1.rbegin(); it1 != num1.rend(); it1++) {
    int digit1 = *it1;
    int product = digit1*digit2 + carry;
    multiply.push_front(product %10);
    carry = product/10;
  }

  while (multiply.empty() != false && multiply.front() == 0) {
    multiply.pop_front();
  }

  if (multiply.empty()) {
    multiply.push_back(0);
  }

  return multiply;
}

