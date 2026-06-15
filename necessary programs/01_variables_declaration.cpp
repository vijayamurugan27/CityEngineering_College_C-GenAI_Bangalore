#include <iostream>
#include <string>

int main() {
    // 1. Integer type
    int age = 21;

    // 2. Floating-point types
    float height = 5.9f;     // 'f' suffix specifies float literal
    double pi = 3.14159265;  // Double precision float

    // 3. Character type
    char grade = 'A';

    // 4. Boolean type
    bool isStudent = true;

    // 5. String type (standard library class)
    std::string greeting = "Hello, C++!";

    // 6. Constant variables (read-only)
    const int MAX_USERS = 100;

    // 7. Auto keyword (type inference)
    auto score = 98.5; // Compiler automatically infers this as double

    return 0;
}
