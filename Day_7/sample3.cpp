#include <iostream>
#include <vector>
#include <stack>

int main() {
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "Vector elements (using Iterator): ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::stack<std::string> plates;
    plates.push("Bottom Plate");
    plates.push("Middle Plate");
    plates.push("Top Plate");

    std::cout << "Popping elements from stack: " << std::endl;
    while (!plates.empty()) {
        std::cout << "Popping: " << plates.top() << std::endl;
        plates.pop(); 
    }

    return 0;
}
