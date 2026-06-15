// Function Declaration and Definition
// Concept

// A function can be declared before main()
// and defined later.

#include<iostream>
using namespace std;
// Function Declaration
int add(int, int);
int main()
{
    int result;
    result = add(10, 15);
    cout << "Sum = " << result;
    return 0;
}
// Function Definition
int add(int a, int b)
{
    return a + b;
}