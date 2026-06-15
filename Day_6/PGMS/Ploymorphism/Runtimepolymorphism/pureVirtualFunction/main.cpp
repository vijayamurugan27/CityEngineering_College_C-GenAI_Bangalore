#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};
int main()
{
    Circle c;
    c.draw();
    return 0;
}

// Output
// Drawing Circle
// Student Understanding

// Parent says:

// Every shape must draw itself

// Child decides:

// Circle Draw
// Rectangle Draw
// Triangle Draw