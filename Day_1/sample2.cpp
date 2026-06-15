#include <iostream>
#include <string>
class Car {
public:
    std::string brand;
    std::string color;
    int year;

    void startEngine() {
        std::cout << "The " << color << " " << brand << "'s engine is now running!" << std::endl;
    }
};
int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.color = "Red";
    myCar.year = 2023;

    Car friendsCar;
    friendsCar.brand = "Tesla";
    friendsCar.color = "Blue";
    friendsCar.year = 2024;

    myCar.startEngine();
    friendsCar.startEngine();

    return 0;
}
