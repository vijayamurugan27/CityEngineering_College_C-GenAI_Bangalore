#include <iostream>
using namespace std;
class Toy
{
public:
    string name;
    // Default Constructor
    Toy()
    {   name = "Default Toy";
        cout << "Default Constructor" << endl;
    }
    // Parameterized Constructor
    Toy(string n)
    {   name = n;
        cout << "Parameterized Constructor" << endl;
    }
    // Copy Constructor
    Toy(const Toy &t)
    {   name = t.name;
        cout << "Copy Constructor" << endl;
    }
    void show()
    {   cout << "Toy Name: " << name << endl;
    }
    // Destructor
    ~Toy()
    {
        cout << "Destructor Called" << endl;
    }
};
int main()
{
    Toy t1;
    Toy t2("Car");
    Toy t3 = t2;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}