#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    Student() { name = "Unknown"; }
    Student(std::string n) : name(n) {}
    void sayHello() {
        std::cout << "Hi, my name is " << name << std::endl;
    }
};

int main() {
    Student* sPtr = new Student("Alice");
    sPtr->sayHello();
    delete sPtr; 

    int size = 3;
    Student* studentArray = new Student[size]; 
    
    studentArray[0] = Student("Bob");
    studentArray[1] = Student("Charlie");
    studentArray[2] = Student("Diana");

    for (int i = 0; i < size; ++i) {
        studentArray[i].sayHello();
    }

    delete[] studentArray; 
    return 0;
}
