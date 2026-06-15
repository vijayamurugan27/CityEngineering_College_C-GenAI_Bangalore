#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "Constructor Called" << endl;
    }
    ~Test()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Test t1;
    return 0;
}

//Output
// Constructor Called
// Destructor Called