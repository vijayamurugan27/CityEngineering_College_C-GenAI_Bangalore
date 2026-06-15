#include <iostream>
#include <vector>

int main() {
    // 1. Standard Static Array
    std::cout << "--- 1. Static Arrays ---" << std::endl;
    int scores[5] = {90, 85, 95, 88, 92};
    
    // Accessing elements and displaying size
    std::cout << "First score: " << scores[0] << std::endl;
    std::cout << "All scores: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    // 2. Multidimensional Array (2D Array)
    std::cout << "\n--- 2. 2D Arrays ---" << std::endl;
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // 3. Dynamic Array (std::vector)
    std::cout << "\n--- 3. Dynamic Arrays (std::vector) ---" << std::endl;
    std::vector<int> numbers = {10, 20, 30};

    // Add elements dynamically
    numbers.push_back(40);
    numbers.push_back(50);

    std::cout << "Vector Size: " << numbers.size() << std::endl;
    std::cout << "Vector Capacity: " << numbers.capacity() << std::endl;

    // Traversal using Range-based For Loop
    std::cout << "Vector elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Removing the last element
    numbers.pop_back();
    std::cout << "After pop_back, size is: " << numbers.size() << std::endl;

    return 0;
}
