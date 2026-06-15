#include <iostream>
using namespace std;

template <class T>
class Box
{
public:
    T value;

    void show()
    {
        cout << value << endl;
    }
};
int main()
{
    Box<int> b1;
    b1.value = 100;
    b1.show();
    Box<string> b2;
    b2.value = "Hello";
    b2.show();
    return 0;
}