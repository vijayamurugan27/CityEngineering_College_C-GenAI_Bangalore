#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("student.txt");
    string name;
    while(file >> name)
    {
        cout << name << endl;
    }
    file.close();
    return 0;
}