#include <iostream>

int main() {
    int n = 5;
    long long factorial = 1;

    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // This line is required to print the result to your command prompt
    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;

    return 0;
}
