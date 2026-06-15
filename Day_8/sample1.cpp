#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Line 1: Learning C++ is fun!\n";
        outFile << "Line 2: Day 8 explores files and exceptions.\n";
        outFile.close();
        std::cout << "Successfully written to file." << std::endl;
    } else {
        std::cout << "Unable to open file for writing!" << std::endl;
    }

    std::ifstream inFile("example.txt");
    std::string line;
    if (inFile.is_open()) {
        std::cout << "Reading contents from file:" << std::endl;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Unable to open file for reading!" << std::endl;
    }

    return 0;
}
