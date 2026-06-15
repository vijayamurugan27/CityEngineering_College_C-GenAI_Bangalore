#include <iostream>
#include <string>

// 1. Structure Definition
// In a struct, each member has its own unique storage location in memory.
struct Person {
    std::string name;
    int age;
    double salary;
};

// 2. Union Definition
// In a union, all members share the same memory location.
// The size of a union is determined by its largest member.
// Only one member can contain a value at any given time.
union Data {
    int intVal;
    float floatVal;
    char charVal;
};

// 3. Enum Class (Strongly typed enumeration)
enum class Color {
    Red,
    Green,
    Blue
};

int main() {
    // Structure Usage
    std::cout << "--- 1. Structure Demonstration ---" << std::endl;
    Person p1 = {"John Doe", 30, 45000.50};
    std::cout << "Name: " << p1.name << std::endl;
    std::cout << "Age: " << p1.age << std::endl;
    std::cout << "Salary: $" << p1.salary << std::endl;
    std::cout << "Size of Person struct: " << sizeof(Person) << " bytes" << std::endl;

    // Union Usage
    std::cout << "\n--- 2. Union Demonstration ---" << std::endl;
    Data d;
    
    d.intVal = 100;
    std::cout << "Data.intVal: " << d.intVal << std::endl;

    d.floatVal = 220.5f; // Overwrites the shared memory location
    std::cout << "Data.floatVal: " << d.floatVal << std::endl;
    std::cout << "Data.intVal (now corrupted): " << d.intVal << std::endl; // Shared memory was overwritten!

    std::cout << "Size of Data union: " << sizeof(Data) << " bytes" << std::endl;

    // Enum Usage
    std::cout << "\n--- 3. Enum Class Demonstration ---" << std::endl;
    Color myColor = Color::Green;

    if (myColor == Color::Green) {
        std::cout << "Selected color is Green." << std::endl;
    }

    return 0;
}
