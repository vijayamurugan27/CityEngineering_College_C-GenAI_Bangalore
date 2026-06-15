#include <iostream>
using namespace std;

class InvalidMarks
{
};
int main()
{
    try
    {
        int marks = -10;
        if(marks < 0)
        {
            throw InvalidMarks();
        }
    }
    catch(InvalidMarks)
    {
        cout << "Marks Cannot Be Negative";
    }
    return 0;
}