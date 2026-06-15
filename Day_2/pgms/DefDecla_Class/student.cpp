#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
public:
    void setData(int r, string n)
    {
        rollNo = r;
        name = n;
    }
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1;
    s1.setData(101, "Rahul");
    s1.display();
    return 0;
}