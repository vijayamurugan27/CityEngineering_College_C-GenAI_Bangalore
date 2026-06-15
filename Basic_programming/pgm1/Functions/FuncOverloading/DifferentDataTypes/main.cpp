#include<iostream>
using namespace std;

void show(int number)
{
    cout << "Integer Value = "
         << number << endl;
}
void show(double number)
{
    cout << "Double Value = "
         << number << endl;
}
int main()
{
    show(100);
    show(45.67);
    return 0;
}