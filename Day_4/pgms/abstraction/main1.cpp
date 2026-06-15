#include <iostream>
using namespace std;

class Test
{
private:
    int num = 100;

public:
    friend void display(Test t);
};

void display(Test t)
{
    cout << "Number = " << t.num;
}

int main()
{
    Test obj;

    display(obj);

    return 0;
}