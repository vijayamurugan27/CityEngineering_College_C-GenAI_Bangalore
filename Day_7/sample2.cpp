#include <iostream>
#include <string>

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;
    Pair(T1 f, T2 s) : first(f), second(s) {}
    void print() {
        std::cout << "(" << first << ", " << second << ")" << std::endl;
    }
};

int main() {
    std::cout << "Max of 10 and 20: " << findMax(10, 20) << std::endl;
    std::cout << "Max of 5.5 and 2.1: " << findMax(5.5, 2.1) << std::endl;

    Pair<std::string, int> agePair("Alice", 21);
    Pair<double, double> pointPair(10.5, 20.3);

    agePair.print();
    pointPair.print();

    return 0;
}
