#include "BigNumCalc.h"
#include <algorithm>

BigNumCalc::BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
  std::list<int> numList;

  for (int i = 0; i < numString.size(); i++) {
    numList.push_back(numString[i] - '0');
  }

  return numList;
  // bool zero = true;

  // for (int i = 0; i< numString.length(); i++) {
  //   if (numString[i] != '0') {
  //     zero = false;
  //   }

  //   if (!zero) {
  //     numList.push_back(numString[i] - '0');
  //   }
  // }

  // if (numList.empty()) {
  //   numList.push_back(0);
  // }

  // return numList;
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
    carry = sum / 10;
    add.push_front(sum % 10);
    i1++;
    i2++;
  }

  if (carry > 0) {
    add.push_front(carry);
  }

  while (!add.empty() && add.front() == 0) {
    add.pop_back();
  }

  if (add.empty()) {
    add.push_back(0);
  }

  return add;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {

  std::string myNum1;
  for (int num :num1) {
    myNum1 += std::to_string(num);
  }

  std::string myNum2;
  for (int num: num2) {
    myNum2 += std::to_string(num);
  }

  std::string str = "";

  int n1 = myNum1.length();
  int n2 = myNum2.length();

  int diff = n1-n2;
  int carry =0;

  for (int i = n2 -1; i>=0; i--) {
    int sub = ((myNum1[i+diff] - '0') - (myNum2[i] -'0') -carry);
    if (sub < 0) {
      sub = sub+10;
      carry =1;
    } else {
      carry =0;
    }
    str.push_back(sub+'0');
    }

    for (int i = n1-n2-1; i>= 0; i--) {
      if(myNum1[i] == '0' && carry) {
        str.push_back('9');
        continue;
      }

      int sub = ((myNum1[i] - '0'
      )- carry);
      if (i>0 || sub>0) {
        str.push_back(sub + '0');
      }
      carry =0;
    }

    std::reverse(str.begin(),str.end());

    std::list<int> sub = buildBigNum(str);

    return sub;

  }

  // std::list<int> subtract;

  // if (num2.size() < num1.size() ||
  //     (num2.size() == num1.size() && num2 < num1)) {
  //   subtract.push_back(0);
  //   return subtract;
  // }

  // int carry = 0;

  // while(num1.size() > num2.size()) {
  //   num2.push_front(0);
  // }
  // auto it1 = num1.rbegin();
  // auto it2 = num2.rbegin();

  // while (it1 != num1.rend()) {
  //   int digit1 = *it1;
  //   int digit2 = *it2;

  //   int diff = digit1 - digit2 - carry;

  //   if(diff < 0) {
  //     diff += 10;
  //     carry = 1;
  //   } else {
  //     carry = 0;
  //   }

  //   subtract.push_front(diff);
  //   it1++;
  //   it2++;
  // }

  // while(!subtract.empty() && subtract.front() == 0) {
  //   subtract.pop_front();
  // }

  // if (subtract.empty()) {
  //   subtract.push_back(0);
  // }

  // return subtract;
// }

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

  for (int digit1 : num1) {
    // int digit1 = *it1;
    int product = digit1 * digit2 + carry;
    carry = product / 10;
    multiply.push_front(product % 10);
  }

  while (carry > 0) {
    multiply.push_back(carry % 10);
    carry = carry / 10;
  }

  while (multiply.empty() != false && multiply.front() == 0) {
    multiply.pop_front();
  }

  if (multiply.empty()) {
    multiply.push_back(0);
  }

  return multiply;
}

BigNumCalc::~BigNumCalc() {}
