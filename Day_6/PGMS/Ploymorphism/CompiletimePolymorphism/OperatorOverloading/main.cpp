#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    Number operator +(Number obj)
    {
        return Number(value + obj.value);
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << n3.value;

    return 0;
}

// Output
// 30
// Student Understanding

// Normally:

// 10 + 20

// Now:

// Object + Object

// is also possible.