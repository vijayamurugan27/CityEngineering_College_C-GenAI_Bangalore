#include <iostream>
using namespace std;

class Father
{
public:
    void house()
    {
        cout << "Father owns a house" << endl;
    }
};

class Son : public Father
{
};

int main()
{
    Son s;

    s.house();

    return 0;
}