// Function with Parameters and Return Value
// Concept

// This is the most commonly used type of function.

#include<iostream>
using namespace std;
// Function Definition
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int result;
    result = multiply(4, 5);
    cout << "Multiplication = " << result;
    return 0;
}