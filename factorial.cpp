#include <iostream>

int factorial (int n,int acc) {
    if (n<2) {
        return acc;
    }
    return factorial(n-1,n*acc);
}

int main() {
    int n = 3;
    int acc = 1;
    int result = factorial(n,acc);
    std::cout <<result << std::endl;
}