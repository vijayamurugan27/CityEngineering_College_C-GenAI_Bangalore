// Function with Return Value
// Concept

// A function can return a value back to main().

// Syntax
// return_type function_name()
// {
//     return value;
// }

#include<iostream>
using namespace std;
// Function Definition
int square(int number)
{
    return number * number;
}
int main()
{
    int result;
    result = square(5);
    cout << "Square = " << result;
    return 0;
}