#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v={40,10,30,20};

    sort(v.begin(),v.end());

    for(int x:v)
    {
        cout<<x<<" ";
    }
}