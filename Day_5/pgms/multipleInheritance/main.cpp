#include <iostream>
using namespace std;

class Teacher1
{
public:
    void math()
    {
        cout << "Math Knowledge" << endl;
    }
};

class Teacher2
{
public:
    void science()
    {
        cout << "Science Knowledge" << endl;
    }
};

class Student : public Teacher1, public Teacher2
{
};

int main()
{
    Student s;

    s.math();
    s.science();

    return 0;
}