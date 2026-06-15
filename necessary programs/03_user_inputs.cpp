#include <iostream>
#include <string>

int main() {
    int age;
    std::string fullName;

    // Getting integer input
    std::cout << "Enter your age: ";
    std::cin >> age;

    // CRITICAL: Clear the input buffer before reading a line
    // std::cin leaves a newline character in the buffer which std::getline will read as an empty line.
    std::cin.ignore(); 

    // Getting a full string line (with spaces)
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    // Printing output
    std::cout << "\n--- User Summary ---" << std::endl;
    std::cout << "Name: " << fullName << std::endl;
    std::cout << "Age: " << age << " years old" << std::endl;

    return 0;
}
