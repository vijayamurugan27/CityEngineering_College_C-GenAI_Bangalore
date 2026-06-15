// Function Overloading
// Concept
// Function overloading means:
// same function name
// different parameters
// The compiler decides which function to call

#include<iostream>
using namespace std;

void display(int a)
{
    cout << "Integer: " << a << endl;
}
void display(int a, int b)
{
    cout << "Two Integers: " << a
         << " " << b << endl;
}
int main()
{
    display(10);
    display(20, 30);
    return 0;
}