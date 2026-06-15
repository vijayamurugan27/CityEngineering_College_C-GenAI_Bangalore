#include <iostream>
#include <string>

class Book {
public:
    std::string title;
    int pages;

    Book() {
        title = "Untitled";
        pages = 0;
        std::cout << "Default Constructor called: " << title << std::endl;
    }

    Book(std::string t, int p) {
        title = t;
        pages = p;
        std::cout << "Parameterized Constructor called: " << title << " (" << pages << " pages)" << std::endl;
    }
};

int main() {
    Book b1;             
    Book b2("C++ Guide", 350); 
    return 0;
}
