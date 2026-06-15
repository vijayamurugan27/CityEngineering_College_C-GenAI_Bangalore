#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    Student(string n)
    {
        name = n;
    }
    void show()
    {
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s1("Rahul");
    s1.show();
    return 0;
}