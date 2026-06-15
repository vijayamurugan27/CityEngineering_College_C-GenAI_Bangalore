#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void showName()
    {
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    // Accessing public variable directly
    s1.name = "Rahul";

    // Accessing public function
    s1.showName();

    return 0;
}