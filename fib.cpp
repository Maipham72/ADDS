#include <iostream>
#include <vector>

int fib (int n) {
    static std::vector<int> fib_values;
    int count = 0;

    if (n==0 || n ==1) {
        return n;
    }

    if (fib_values.size() > n-2){
        std::cout << "found fib" << n << "value" << fib_values.at(n-2) << std::endl;
        count++;
        std::cout << count << std::endl;

        return fib_values.at(n-2);
    }

    //std::cout << count << std::endl;

    int result = fib(n-1) + fib(n-2);
    fib_values.push_back(result);
    return result;
}

int main() {
    fib(5);
    std::cout << std::endl;
    fib(5);
}