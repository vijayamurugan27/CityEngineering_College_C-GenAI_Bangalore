// Factorial using Loop
// Concept

// Factorial of 5:

// 5!=5×4×3×2×1


#include<iostream>
using namespace std;

int main()
{
    int number;
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    for(int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial = " << factorial;

    return 0;
}