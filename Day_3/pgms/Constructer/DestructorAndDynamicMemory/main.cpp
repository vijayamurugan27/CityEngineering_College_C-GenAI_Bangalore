#include <iostream>
using namespace std;
class Demo
{
private:
    int *ptr;
public:
    Demo()
    {
        ptr = new int;
        cout << "Memory Allocated" << endl;
    }
    ~Demo()
    {
        delete ptr;
        cout << "Memory Released" << endl;
    }
};
int main()
{
    Demo d1;
    return 0;
}