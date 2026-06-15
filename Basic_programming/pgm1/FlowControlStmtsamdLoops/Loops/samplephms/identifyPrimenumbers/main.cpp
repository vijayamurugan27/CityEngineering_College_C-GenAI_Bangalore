// Prime Number Check
// Concept

// A prime number has only 2 factors:

// 1
// itself

#include<iostream>
using namespace std;

int main()
{
    int number;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }

    return 0;
}