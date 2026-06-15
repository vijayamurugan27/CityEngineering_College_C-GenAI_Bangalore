#include <iostream>
#include <string>

/*
 * ABSTRACTION:
 * Abstraction is the OOP concept of hiding the complex implementation details 
 * and showing only the essential features of an object.
 * In C++, abstraction is achieved using Abstract Classes (classes with at least 
 * one pure virtual function) and interfaces.
 */

// Abstract Class
class Appliance {
protected:
    bool isOn;

public:
    Appliance() : isOn(false) {}

    // Pure Virtual Functions (interface that must be implemented by derived classes)
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    
    // Non-virtual helper function
    void showStatus() const {
        std::cout << "Appliance is " << (isOn ? "ON" : "OFF") << std::endl;
    }

    virtual ~Appliance() {}
};

// Derived Class 1
class Fan : public Appliance {
public:
    void turnOn() override {
        isOn = true;
        std::cout << "Fan is now spinning." << std::endl;
    }

    void turnOff() override {
        isOn = false;
        std::cout << "Fan has stopped spinning." << std::endl;
    }
};

// Derived Class 2
class Light : public Appliance {
public:
    void turnOn() override {
        isOn = true;
        std::cout << "Light bulb is glowing bright." << std::endl;
    }

    void turnOff() override {
        isOn = false;
        std::cout << "Light bulb is off." << std::endl;
    }
};

int main() {
    // Cannot instantiate an abstract class:
    // Appliance app; // Compiler Error!

    // We can use pointers of the abstract base class type to interact with the interface
    Appliance* fan = new Fan();
    Appliance* light = new Light();

    std::cout << "--- Interacting with Fan ---" << std::endl;
    fan->showStatus();
    fan->turnOn();
    fan->showStatus();
    fan->turnOff();

    std::cout << "\n--- Interacting with Light ---" << std::endl;
    light->showStatus();
    light->turnOn();
    light->showStatus();
    light->turnOff();

    // Clean up
    delete fan;
    delete light;

    return 0;
}
