#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // 1. Default Constructor
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
        std::cout << "Default Constructor called!" << std::endl;
    }

    // 2. Parameterized Constructor
    Car(std::string b, std::string m, int y) : brand(b), model(m), year(y) {
        std::cout << "Parameterized Constructor called for " << brand << " " << model << "!" << std::endl;
    }

    // 3. Copy Constructor
    Car(const Car &other) {
        brand = other.brand;
        model = other.model;
        year = other.year;
        std::cout << "Copy Constructor called to clone " << brand << "!" << std::endl;
    }

    // 4. Destructor (called when object goes out of scope)
    ~Car() {
        std::cout << "Destructor called for " << brand << " " << model << "!" << std::endl;
    }

    void displayInfo() const {
        std::cout << "Car Info: " << year << " " << brand << " " << model << std::endl;
    }
};

int main() {
    std::cout << "--- Creating car1 (Default) ---" << std::endl;
    Car car1;
    car1.displayInfo();

    std::cout << "\n--- Creating car2 (Parameterized) ---" << std::endl;
    Car car2("Tesla", "Model S", 2023);
    car2.displayInfo();

    std::cout << "\n--- Creating car3 (Copy) ---" << std::endl;
    Car car3 = car2; // Calls Copy Constructor
    car3.displayInfo();

    std::cout << "\n--- Ending Main (Objects go out of scope and Destructors execute) ---" << std::endl;
    return 0;
}
