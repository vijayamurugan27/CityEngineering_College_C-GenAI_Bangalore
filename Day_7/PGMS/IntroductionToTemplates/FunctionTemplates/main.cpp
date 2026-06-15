#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << maximum(10,20) << endl;
    cout << maximum(4.5,8.2);
    return 0;
}