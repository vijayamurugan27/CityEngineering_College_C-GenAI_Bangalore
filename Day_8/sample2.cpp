#include <iostream>
#include <exception>

class InsufficientFundsException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Transaction Failed: Insufficient funds in your account!";
    }
};

double divide(double a, double b) {
    if (b == 0) {
        throw "Division by zero condition!"; 
    }
    return a / b;
}

int main() {
    try {
        std::cout << "10 / 2 = " << divide(10, 2) << std::endl;
        std::cout << "10 / 0 = " << divide(10, 0) << std::endl; 
    }
    catch (const char* msg) {
        std::cerr << "Caught Exception: " << msg << std::endl;
    }

    double balance = 50.0;
    double withdrawAmount = 100.0;
    try {
        if (withdrawAmount > balance) {
            throw InsufficientFundsException();
        }
        balance -= withdrawAmount;
    }
    catch (const InsufficientFundsException& e) {
        std::cerr << "Caught Bank Exception: " << e.what() << std::endl;
    }

    return 0;
}
