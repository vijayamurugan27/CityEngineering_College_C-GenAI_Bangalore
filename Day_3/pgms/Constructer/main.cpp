#include <iostream>
using namespace std;

class Car
{
public:
    Car()
    {
        cout << "Car Started!" << endl;
    }
};

int main()
{
    Car c1;

    return 0;
}

//Output    
// Car started.