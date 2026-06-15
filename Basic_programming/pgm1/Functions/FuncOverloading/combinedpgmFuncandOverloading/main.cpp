// Combined Program (Functions + Overloading)
// Concept

// This program combines:

// Functions
// Parameters
// Return values
// Function overloading

#include<iostream>
using namespace std;
// Function Overloading
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
// Function
void message()
{
    cout << "Welcome to Modular Programming"
         << endl;
}
int main()
{
    int sum1;
    double sum2;
    // Function Call
    message();
    // Integer addition
    sum1 = add(10, 20);
    // Double addition
    sum2 = add(5.5, 4.5);
    cout << "Integer Sum = "
         << sum1 << endl;
    cout << "Double Sum = "
         << sum2 << endl;
    return 0;
}