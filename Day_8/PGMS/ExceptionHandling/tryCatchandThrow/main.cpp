#include <iostream>
using namespace std;
int main()
{
    try
    {
        int age = 15;
        if(age < 18)
        {
            throw age;
        }
        cout << "Eligible";
    }
    catch(int x)
    {
        cout << "Age must be above 18";
    }
    return 0;
}