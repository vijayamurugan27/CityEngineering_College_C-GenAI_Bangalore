#include<iostream>
using namespace std;

int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int result;
    result = maximum(50, 90);
    cout << "Largest Number = " << result;
    return 0;
}