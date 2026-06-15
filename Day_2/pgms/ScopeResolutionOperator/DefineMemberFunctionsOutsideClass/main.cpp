#include <iostream>
using namespace std;

class Employee
{
private:
    int id;

public:
    void setId(int i);
    void showId();
};

void Employee::setId(int i)
{     id = i; }

void Employee::showId()
{   cout << "ID: " << id;   }

int main()
{
    Employee e1;
    e1.setId(1001);
    e1.showId();
    return 0;
}