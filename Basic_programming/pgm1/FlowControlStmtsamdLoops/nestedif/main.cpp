// Nested if Statement
// Concept

// An if statement inside another if statement.

#include<iostream>
using namespace std;

int main()
{
    int age = 25;
    bool hasLicense = true;
    if(age >= 18)
    {
        if(hasLicense == true)
        {
            cout << "Eligible to drive";
        }
    }
    return 0;
}