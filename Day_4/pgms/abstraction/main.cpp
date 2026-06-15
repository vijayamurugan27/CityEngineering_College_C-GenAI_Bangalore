#include <iostream>
using namespace std;

class Car
{
public:
    void start()
    {
        cout << "Car Started" << endl;
    }
};

int main()
{
    Car c;

    c.start();

    return 0;
}