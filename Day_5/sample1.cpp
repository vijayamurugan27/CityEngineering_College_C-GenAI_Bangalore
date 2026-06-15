#include <iostream>
#include <string>

class Animal {
protected:
    std::string species; 

public:
    void setSpecies(std::string spec) {
        species = spec;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        std::cout << "This " << species << " is breathing air." << std::endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        std::cout << "The dog (" << species << ") says: Woof! Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.setSpecies("Canine"); 
    myDog.breathe();            
    myDog.bark();               
    return 0;
}
