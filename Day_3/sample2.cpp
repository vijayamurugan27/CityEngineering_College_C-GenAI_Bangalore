#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(std::string n, int a) {
        name = n;
        age = a;
    }

    Student(const Student &other) {
        name = other.name + " (Copy)";
        age = other.age;
        std::cout << "Copy Constructor invoked!" << std::endl;
    }

    void display() {
        std::cout << "Student Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student s1("John", 20); 
    Student s2 = s1;        
    
    s1.display();
    s2.display();
    return 0;
}
