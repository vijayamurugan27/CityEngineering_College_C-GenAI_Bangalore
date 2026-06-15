#include <iostream>
#include <string>

// Base Class (Parent)
class Animal {
protected:
    std::string name; // Accessible to derived classes but not public

public:
    Animal(std::string n) : name(n) {}
    
    void eat() {
        std::cout << name << " is eating." << std::endl;
    }
};

// Derived Class 1 (Single Inheritance)
class Dog : public Animal {
public:
    Dog(std::string n) : Animal(n) {}

    void bark() {
        std::cout << name << " says: Woof! Woof!" << std::endl; // Access protected name
    }
};

// Derived Class 2 from Dog (Multilevel Inheritance)
class Puppy : public Dog {
public:
    Puppy(std::string n) : Dog(n) {}

    void weep() {
        std::cout << name << " is whimpering." << std::endl;
    }
};

// Another Base Class
class PetCare {
public:
    void bathe() {
        std::cout << "Bath done successfully." << std::endl;
    }
};

// Derived Class from multiple base classes (Multiple Inheritance)
class DomesticDog : public Dog, public PetCare {
public:
    DomesticDog(std::string n) : Dog(n) {}
};

int main() {
    std::cout << "--- Single Inheritance ---" << std::endl;
    Dog myDog("Buddy");
    myDog.eat();
    myDog.bark();

    std::cout << "\n--- Multilevel Inheritance ---" << std::endl;
    Puppy myPuppy("Tiny");
    myPuppy.eat();  // Inherited from Animal
    myPuppy.bark(); // Inherited from Dog
    myPuppy.weep(); // Unique to Puppy

    std::cout << "\n--- Multiple Inheritance ---" << std::endl;
    DomesticDog myPet("Max");
    myPet.eat();   // From Animal (via Dog)
    myPet.bark();  // From Dog
    myPet.bathe(); // From PetCare

    return 0;
}
