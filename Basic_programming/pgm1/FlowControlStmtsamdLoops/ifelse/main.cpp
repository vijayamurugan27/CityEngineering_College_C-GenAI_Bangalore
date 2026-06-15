// if-else Statement
// Concept
// if block runs when condition is true
// else block runs when condition is false


#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    return 0;
}