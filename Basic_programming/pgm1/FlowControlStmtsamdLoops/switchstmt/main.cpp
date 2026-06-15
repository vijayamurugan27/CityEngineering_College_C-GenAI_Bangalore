// switch Statement
// Concept

// Used to select one option from many choices.

// syntax
// switch(variable)
// {
//     case value:
//         // code
//         break;
// }


#include<iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter day number (1-3): ";
    cin >> day;
    switch(day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        default:
            cout << "Invalid Input";
    }
    return 0;
}