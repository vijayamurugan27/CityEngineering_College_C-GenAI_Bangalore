#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
};
int main()
{
    Student *ptr;
    ptr = new Student[3];
    ptr[0].roll = 101;
    ptr[1].roll = 102;
    ptr[2].roll = 103;
    cout << ptr[0].roll << endl;
    cout << ptr[1].roll << endl;
    cout << ptr[2].roll << endl;
    delete[] ptr;
    return 0;
}