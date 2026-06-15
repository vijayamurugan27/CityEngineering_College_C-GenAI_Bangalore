#include <iostream>
#include <string>

// 1. Operator Overloading (Compile-time Polymorphism)
class Complex {
public:
    double real, imag;

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the '+' operator to add two Complex numbers
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() const {
        std::cout << real << " + i" << imag << std::endl;
    }
};

// 2. Runtime Polymorphism (using Virtual Functions)
class Shape {
public:
    // Pure virtual function makes this an abstract base class
    virtual void draw() const {
        std::cout << "Drawing a generic shape." << std::endl;
    }
    
    // Virtual destructor is crucial for base classes
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() const override { // 'override' ensures the signature matches exactly
        std::cout << "Drawing a Circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Rectangle." << std::endl;
    }
};

int main() {
    std::cout << "--- Compile-time Polymorphism (Operator Overloading) ---" << std::endl;
    Complex c1(3.5, 2.5), c2(1.2, 4.3);
    Complex c3 = c1 + c2; // Calls overloaded + operator
    std::cout << "c1 = "; c1.display();
    std::cout << "c2 = "; c2.display();
    std::cout << "c3 = c1 + c2 = "; c3.display();

    std::cout << "\n--- Runtime Polymorphism (Virtual Functions / Dynamic Binding) ---" << std::endl;
    // Base class pointer pointing to Derived class objects
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Call virtual function - resolved at runtime based on the actual object type
    shape1->draw(); // Calls Circle's draw
    shape2->draw(); // Calls Rectangle's draw

    // Clean up memory
    delete shape1;
    delete shape2;

    return 0;
}
