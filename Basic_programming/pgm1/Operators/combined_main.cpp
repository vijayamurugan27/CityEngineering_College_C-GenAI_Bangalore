// This combines:

// Variables
// Constants
// Data types
// Operators
// Input/Output

#include<iostream>
using namespace std;

int main()
{
    // Variables
    int age;
    double salary;
    char grade;
    bool isPassed;

    // Constant
    const float PI = 3.14;

    // Input
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter grade: ";
    cin >> grade;

    // Assigning boolean value
    isPassed = true;

    // Output
    cout << "\n--- Student Details ---" << endl;

    cout << "Age = " << age << endl;
    cout << "Salary = " << salary << endl;
    cout << "Grade = " << grade << endl;
    cout << "Passed = " << isPassed << endl;
    cout << "PI Value = " << PI << endl;

    // Operators
    cout << "\nArithmetic Operation:" << endl;
    cout << "Age + 10 = " << age + 10 << endl;

    cout << "\nRelational Operation:" << endl;
    cout << (age > 18) << endl;

    cout << "\nLogical Operation:" << endl;
    cout << (age > 18 && salary > 1000);

    return 0;
}