#include <iostream>
using namespace std;

class Parent
{
protected:
    int money = 10000;
};

class Child : public Parent
{
public:
    void display()
    {
        cout << money;
    }
};

int main()
{
    Child c;

    c.display();

    return 0;
}