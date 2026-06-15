#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    void display()
    {
        cout << name;
    }
};
int main()
{
    Student *ptr = new Student;
    ptr->name = "John";
    ptr->display();
    delete ptr;
    return 0;
}