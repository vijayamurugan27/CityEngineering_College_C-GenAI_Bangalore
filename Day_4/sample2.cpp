#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(std::string name, double salary) {
        this->name = name;      
        this->salary = salary;  
    }

    void display() {
        std::cout << "Employee: " << this->name << ", Salary: $" << this->salary << std::endl;
    }
};

int main() {
    Employee emp("Bob", 65000);
    emp.display();

    Employee* empPtr = &emp; 
    empPtr->display();       

    return 0;
}
