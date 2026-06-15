#include <iostream>

class Engine {
public:
    Engine() { std::cout << "Engine Constructor called." << std::endl; }
    ~Engine() { std::cout << "Engine Destructor called." << std::endl; }
};

class Wheels {
public:
    Wheels() { std::cout << "Wheels Constructor called." << std::endl; }
    ~Wheels() { std::cout << "Wheels Destructor called." << std::endl; }
};

class Car : public Engine, public Wheels {
public:
    Car() { std::cout << "Car Constructor called." << std::endl; }
    ~Car() { std::cout << "Car Destructor called." << std::endl; }
};

int main() {
    std::cout << "Creating Car object:" << std::endl;
    {
        Car myCar;
    } 
    std::cout << "Car object destroyed." << std::endl;
    return 0;
}
