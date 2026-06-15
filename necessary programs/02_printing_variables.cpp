#include <iostream>
#include <iomanip> // Needed for formatting outputs

int main() {
    int count = 5;
    double price = 19.99;
    char group = 'B';
    bool status = true;

    // Printing variables using std::cout
    std::cout << "Count: " << count << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Group: " << group << std::endl;
    
    // Printing booleans as 'true'/'false' instead of 1/0
    std::cout << "Status (default): " << status << std::endl;
    std::cout << "Status (boolalpha): " << std::boolalpha << status << std::endl;

    // Formatting decimal places
    double value = 123.456789;
    std::cout << "\nDefault double: " << value << std::endl;
    std::cout << "Fixed to 2 decimal places: " << std::fixed << std::setprecision(2) << value << std::endl;

    // Formatting widths and alignment
    std::cout << "\nFormatting with width:" << std::endl;
    std::cout << std::setw(10) << "Product" << std::setw(10) << "Price" << std::endl;
    std::cout << std::setw(10) << "Apple" << std::setw(10) << 1.50 << std::endl;
    std::cout << std::setw(10) << "Banana" << std::setw(10) << 0.75 << std::endl;

    return 0;
}
