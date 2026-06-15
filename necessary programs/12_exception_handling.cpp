#include <iostream>
#include <stdexcept> // Standard exceptions header

// A function that throws an exception if denominator is zero
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error!");
    }
    return numerator / denominator;
}

int main() {
    double x = 10.0;
    double y = 0.0;

    std::cout << "--- Standard Exception Handling ---" << std::endl;
    try {
        // This call will throw an exception
        double result = divide(x, y);
        std::cout << "Result: " << result << std::endl; // This line won't execute
    } 
    catch (const std::runtime_error& e) {
        // Catching standard library runtime_error exceptions
        std::cout << "Caught runtime error: " << e.what() << std::endl;
    }
    catch (...) {
        // Catch-all block for any other unhandled exceptions
        std::cout << "Caught an unknown exception!" << std::endl;
    }

    std::cout << "\n--- Custom Value Throwing ---" << std::endl;
    try {
        int age = 15;
        if (age < 18) {
            throw age; // Throwing an integer
        }
    }
    catch (int ageValue) {
        std::cout << "Caught age exception: Underage user of age " << ageValue << " tried to register." << std::endl;
    }

    std::cout << "\nProgram execution continued successfully after handling exceptions." << std::endl;

    return 0;
}
