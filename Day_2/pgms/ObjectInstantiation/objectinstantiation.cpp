#include <iostream>
#include <string>
using namespace std;
class Car
{
    string brand;
public:
    Car(string b)
    {
        brand = b;
    }
    void show()
    {
        cout << brand;
    }
};
int main()
{
    Car c1("Toyota");
    c1.show();
}