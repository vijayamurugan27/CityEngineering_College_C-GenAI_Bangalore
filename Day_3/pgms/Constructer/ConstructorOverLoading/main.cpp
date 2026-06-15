#include <iostream>
using namespace std;

class Pizza
{
public:
    Pizza()
    {
        cout << "Default Pizza" << endl;
    }

    Pizza(string type)
    {
        cout << type << " Pizza" << endl;
    }
};

int main()
{
    Pizza p1;

    Pizza p2("Cheese");

    return 0;
}
//Output
// Default Pizza
// Cheese Pizza
