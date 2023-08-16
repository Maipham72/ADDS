#include <iostream>

int sumDigit (int n,int acc) {
    if (n <1) {
        return acc;
    }
    // int lasdigit = n%10;
    // int otherDigit = n/10;
    return sumDigit(n-1,n+acc);
    // return sumDigit(otherDigit,acc + lasdigit);
}

int main() {
    int n = 5;
    int acc = 1;
    int result = sumDigit(n,acc);
    std::cout << result << std::endl;

}