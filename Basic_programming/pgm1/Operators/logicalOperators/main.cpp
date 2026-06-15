// Logical operators combine conditions.

// Operator	Meaning
// &&	    AND
// !	    NOT

#include<iostream>
using namespace std;

int main()
{
    int age = 22;

    cout << (age > 18 && age < 30) << endl;
    cout << (age > 18 || age > 50) << endl;
    cout << !(age > 18);

    return 0;
}