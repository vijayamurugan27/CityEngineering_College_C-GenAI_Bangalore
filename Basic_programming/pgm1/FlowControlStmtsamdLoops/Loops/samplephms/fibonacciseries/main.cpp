// Fibonacci Series
// Concept

// Fibonacci sequence:
// 0 1 1 2 3 5 8 ...

#include<iostream>
using namespace std;

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << first << " " << second << " ";

    for(int i = 3; i <= n; i++)
    {
        next = first + second;

        cout << next << " ";

        first = second;
        second = next;
    }

    return 0;
}