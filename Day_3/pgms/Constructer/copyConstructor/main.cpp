#include <iostream>
using namespace std;

class Box
{
public:
    int value;
    Box(int v)
    {
        value = v;
    }
    // Copy Constructor
    // syntax ClassName(const ClassName &object)
    Box(const Box &b)
    {
        value = b.value;
    }
    void show()
    {
        cout << "Value: " << value << endl;
    }
};
int main()
{
    Box b1(100);
    Box b2 = b1;
    b2.show();
    return 0;
}
//Output
// Value: 100