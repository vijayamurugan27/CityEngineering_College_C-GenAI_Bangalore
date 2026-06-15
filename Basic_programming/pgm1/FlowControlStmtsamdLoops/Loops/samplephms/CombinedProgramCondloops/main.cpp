// Combined Program (Conditionals + Loops)
// Concept

// This combines:

// if-else
// switch
// loops

#include<iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Even or Odd" << endl;
        cout << "2. Multiplication Table" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                int num;
                cout << "Enter number: ";
                cin >> num;
                if(num % 2 == 0)
                {
                    cout << "Even Number";
                }
                else
                {
                    cout << "Odd Number";
                }

                break;
            }
            case 2:
            {
                int num;
                cout << "Enter number: ";
                cin >> num;
                for(int i = 1; i <= 10; i++)
                {
                    cout << num << " x " << i
                         << " = " << num * i << endl;
                }
                break;
            }
            case 3:
                cout << "Program Ended";
                break;
            default:
                cout << "Invalid Choice";
        }
    }
    while(choice != 3);
    return 0;
}