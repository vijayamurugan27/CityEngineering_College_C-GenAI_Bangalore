#include <iostream>
using namespace std;

class Parent
{
protected:
    int money = 1000;
};

class Child : public Parent
{
public:
    void showMoney()
    {
        cout << "Money from Parent: " << money << endl;
    }
};

int main()
{
    Child c1;

    c1.showMoney();

    return 0;
}

