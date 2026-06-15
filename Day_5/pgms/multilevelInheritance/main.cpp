#include <iostream>
using namespace std;

class Grandfather
{
public:
    void land()
    {
        cout << "Owns Land" << endl;
    }
};

class Father : public Grandfather
{
};

class Son : public Father
{
};

int main()
{
    Son s;

    s.land();

    return 0;
}