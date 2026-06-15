#include <iostream>
#include <string>

// 1. Function Template (Generic function)
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// 2. Class Template (Generic class)
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() const {
        std::cout << "(" << first << ", " << second << ")" << std::endl;
    }

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
};

int main() {
    std::cout << "--- 1. Function Template (findMax) ---" << std::endl;
    // Finding max between integers
    std::cout << "Max (10, 20): " << findMax<int>(10, 20) << std::endl;
    
    // Finding max between doubles
    std::cout << "Max (5.5, 2.3): " << findMax<double>(5.5, 2.3) << std::endl;
    
    // Finding max between characters
    std::cout << "Max ('g', 'a'): " << findMax<char>('g', 'a') << std::endl;

    std::cout << "\n--- 2. Class Template (Pair) ---" << std::endl;
    // Instantiate a Pair of Int and String
    Pair<int, std::string> p1(1, "Apple");
    std::cout << "p1: "; p1.display();

    // Instantiate a Pair of Double and Char
    Pair<double, char> p2(98.6, 'F');
    std::cout << "p2: "; p2.display();

    return 0;
}
