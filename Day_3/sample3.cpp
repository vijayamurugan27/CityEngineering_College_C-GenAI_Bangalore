#include <iostream>

class DynamicArray {
private:
    int* data; 

public:
    DynamicArray(int size) {
        data = new int[size];
        std::cout << "Array of size " << size << " allocated in memory." << std::endl;
    }

    ~DynamicArray() {
        delete[] data; 
        std::cout << "Array memory cleaned up by Destructor." << std::endl;
    }
};

int main() {
    std::cout << "Main function starts." << std::endl;
    {
        DynamicArray arr(100);
    } 
    std::cout << "Main function ends." << std::endl;
    return 0;
}
