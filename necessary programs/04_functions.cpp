#include <iostream>
#include <string>

// 1. Basic Function Declaration (Prototype)
void greetUser(std::string name);

// 2. Function with return type and default parameter
double calculateArea(double length, double width = 5.0);

// 3. Function overloading (same name, different parameters)
int add(int a, int b);
double add(double a, double b);

// 4. Pass-by-value vs Pass-by-reference
void incrementByValue(int x);     // Local copy is modified
void incrementByReference(int &x); // Original variable is modified

int main() {
    greetUser("Alice");

    // Using calculateArea with explici_t width
    std::cout << "Area (10.0 x 3.0): " << calculateArea(10.0, 3.0) << std::endl;
    // Using calculateArea with default width
    std::cout << "Area (10.0 x default): " << calculateArea(10.0) << std::endl;

    // Overloaded function calls
    std::cout << "Adding ints: " << add(5, 10) << std::endl;
    std::cout << "Adding doubles: " << add(5.5, 10.2) << std::endl;

    int number = 10;
    std::cout << "\nOriginal number: " << number << std::endl;

    incrementByValue(number);
    std::cout << "After pass-by-value: " << number << std::endl;

    incrementByReference(number);
    std::cout << "After pass-by-reference: " << number << std::endl;

    return 0;
}

// Function definitions
void greetUser(std::string name) {
    std::cout << "Welcome back, " << name << "!" << std::endl;
}

double calculateArea(double length, double width) {
    return length * width;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

void incrementByValue(int x) {
    x++;
}

void incrementByReference(int &x) {
    x++;
}
