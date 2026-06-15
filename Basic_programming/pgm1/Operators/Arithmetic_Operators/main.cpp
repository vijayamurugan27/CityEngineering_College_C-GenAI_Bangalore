// | Operator | Meaning        |
// | -------- | -------------- |
// | +        | Addition       |
// | -        | Subtraction    |
// | *        | Multiplication |
// | /        | Division       |
// | %        | Modulus        |


#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Modulus = " << a % b;

    return 0;
}