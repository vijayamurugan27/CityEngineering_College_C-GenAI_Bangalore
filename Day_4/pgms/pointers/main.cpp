#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    int *ptr = &num;

    cout << "Value of num = " << num << endl;

    cout << "Address = " << ptr << endl;

    cout << "Value using pointer = " << *ptr << endl;

    return 0;
}

// Output
// Value of num = 10
// Address = 0x61ff08
// Value using pointer = 10