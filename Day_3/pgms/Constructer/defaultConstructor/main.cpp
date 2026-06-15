#include <iostream>
using namespace std;

class Ball
{
public:
    Ball()
    {
        cout << "Red Ball Created!" << endl;
    }
};

int main()
{
    Ball b1;

    return 0;
}

//Output    
// Red Ball Created!