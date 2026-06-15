#include <iostream>
using namespace std;

class Test
{
public:
    static int count;
};

int Test::count = 0;

int main()
{
    cout << Test::count;
}