#include <iostream>
using namespace std;
class Book
{
public:
    int id;
    string title;

    void input()
    {
        cin >> id >> title;
    }

    void display()
    {
        cout << id << " " << title << endl;
    }
};

int main()
{
    Book b;

    b.input();

    b.display();

    return 0;
}