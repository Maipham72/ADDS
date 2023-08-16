#include <iostream>

int power(int n, int base, int acc) {
    if (n == 0) {
        return acc;
    }

    return (n-1, acc*base);
}

int main() {
    int n = 2;
    int base = 5;
    int acc = 0;
    int result = power(n,base,acc);

    std::cout << result << std::endl;
}