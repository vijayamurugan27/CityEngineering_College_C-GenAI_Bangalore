#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    void setDimensions(double w, double h);
    double calculateArea();
};

void Rectangle::setDimensions(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::calculateArea() {
    return width * height;
}

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 4.0);
    std::cout << "Rectangle Area: " << rect.calculateArea() << " sq units" << std::endl;
    return 0;
}
