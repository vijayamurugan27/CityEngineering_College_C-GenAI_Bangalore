// Function Call Multiple Times
// Concept

// Functions can be reused many times.

#include<iostream>
using namespace std;

void line()
{
    cout << "------------------" << endl;
}

int main()
{
    line();
    cout << "Menu 1" << endl;

    line();
    cout << "Menu 2" << endl;

    line();

    return 0;
}