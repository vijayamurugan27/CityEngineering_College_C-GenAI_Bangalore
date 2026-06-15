#include <iostream>

class Box {
private:
    double width;

public:
    Box() { width = 0.0; }
    void setWidth(double w) { width = w; }

    friend void printWidth(Box b);
    friend class BoxInspector;
};

void printWidth(Box b) {
    std::cout << "Friend function says Box Width = " << b.width << std::endl;
}

class BoxInspector {
public:
    void inspect(Box b) {
        std::cout << "Friend Class BoxInspector reads width: " << b.width << std::endl;
    }
};

int main() {
    Box myBox;
    myBox.setWidth(12.5);

    printWidth(myBox); 

    BoxInspector inspector;
    inspector.inspect(myBox); 

    return 0;
}
