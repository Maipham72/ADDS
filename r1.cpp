#include <cmath>
// #include <iostream>

int sum_of_squares(int n, int acc) {
    if (n == 1) {
        return acc;
    }

    return sum_of_squares(n-1, acc + pow(n,n));

}

// int main() {
//     int n = 3;
//     int acc = 1;
//     int result = sum_of_squares(n,acc);
//     std::cout << result << std::endl;
// }