// Function with Parameters
// Concept

// Parameters allow values to be passed into functions

#include<iostream>
using namespace std;
// Function Definition
void addNumbers(int a, int b)
{
    cout << "Sum = " << a + b;
}
int main()
{
    // Function Call
    addNumbers(10, 20);
    return 0;
}