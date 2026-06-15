#include<iostream>
using namespace std;

int factorial(int number)
{
    int fact = 1;

    for(int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int result;
    result = factorial(5);
    cout << "Factorial = "  << result;
    return 0;
}