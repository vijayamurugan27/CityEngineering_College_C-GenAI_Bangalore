#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int x : v)
    {
        cout << x << " ";
    }
}


// Output
// 10 20 30
// Student Understanding
// push_back()

// Adds new element