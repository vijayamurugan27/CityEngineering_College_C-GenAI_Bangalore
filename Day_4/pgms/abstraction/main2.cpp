#include <iostream>
using namespace std;

class A
{
private:
    int salary = 50000;

    friend class B;
};

class B
{
public:
    void show(A obj)
    {
        cout << "Salary = " << obj.salary;
    }
};

int main()
{
    A a;
    B b;

    b.show(a);

    return 0;
}