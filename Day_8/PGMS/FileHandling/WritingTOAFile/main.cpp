#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("student.txt");

    file << "John" << endl;
    file << "David" << endl;
    file << "Priya" << endl;

    file.close();

    cout << "Data Saved";

    return 0;
}