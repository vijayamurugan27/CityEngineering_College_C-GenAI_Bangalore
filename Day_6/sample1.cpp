#include <iostream>

class PrintData {
public:
    void print(int i) {
        std::cout << "Printing integer: " << i << std::endl;
    }
    void print(double f) {
        std::cout << "Printing float: " << f << std::endl;
    }
};

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    PrintData pd;
    pd.print(5);     
    pd.print(5.5);   

    Complex c1(3.0, 4.0), c2(1.5, 2.5);
    Complex c3 = c1 + c2; 
    std::cout << "c1 + c2 = ";
    c3.display();

    return 0;
}
