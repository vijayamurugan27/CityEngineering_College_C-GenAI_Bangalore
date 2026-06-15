#include <iostream>

int main() {
    int var = 42;
    
    // 1. Pointer declaration and initialization
    // A pointer stores the memory address of another variable.
    int* ptr = &var;

    std::cout << "--- 1. Pointers ---" << std::endl;
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Memory address of var (&var): " << &var << std::endl;
    std::cout << "Value stored in ptr (address of var): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr (*ptr - Dereferencing): " << *ptr << std::endl;

    // Modifying the value using pointer dereference
    *ptr = 99;
    std::cout << "New value of var after modification through pointer: " << var << std::endl;

    // 2. References
    // A reference is an alias (another name) for an existing variable.
    int& ref = var;
    ref = 150; // Directly modifies var

    std::cout << "\n--- 2. References ---" << std::endl;
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;
    std::cout << "Memory address of var: " << &var << std::endl;
    std::cout << "Memory address of ref: " << &ref << std::endl; // Addresses are identical

    // 3. Dynamic Memory Allocation (Heap Allocation)
    std::cout << "\n--- 3. Dynamic Memory Allocation ---" << std::endl;
    int* dynamicPtr = new int(77); // Allocate an integer in heap and initialize to 77
    std::cout << "Value in heap: " << *dynamicPtr << std::endl;
    
    // Freeing memory to avoid memory leaks
    delete dynamicPtr;
    dynamicPtr = nullptr; // Good practice: point to nullptr after deleting

    return 0;
}
