#include <iostream>
#include <fstream>  // Required header for file streams
#include <string>

int main() {
    std::string filename = "sample_file.txt";

    // 1. Writing to a file (ofstream)
    std::cout << "--- 1. Writing to a file ---" << std::endl;
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << "Line 1: Writing C++ code is fun!" << std::endl;
        outFile << "Line 2: File Handling in C++ is straightforward." << std::endl;
        outFile << "Line 3: Goodbye, file!" << std::endl;
        
        outFile.close(); // Close file after writing
        std::cout << "Successfully written data to: " << filename << std::endl;
    } else {
        std::cerr << "Error: Unable to open file for writing!" << std::endl;
        return 1;
    }

    // 2. Reading from a file (ifstream)
    std::cout << "\n--- 2. Reading from the file ---" << std::endl;
    std::ifstream inFile(filename);
    std::string line;

    if (inFile.is_open()) {
        // Read file line-by-line
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        
        inFile.close(); // Close file after reading
    } else {
        std::cerr << "Error: Unable to open file for reading!" << std::endl;
        return 1;
    }

    // 3. Appending to a file
    std::cout << "\n--- 3. Appending to the file ---" << std::endl;
    std::ofstream appendFile(filename, std::ios::app); // std::ios::app opens in append mode

    if (appendFile.is_open()) {
        appendFile << "Line 4: This line is appended later." << std::endl;
        appendFile.close();
        std::cout << "Successfully appended data to: " << filename << std::endl;
    }

    return 0;
}
