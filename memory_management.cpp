#include <iostream>

int main() {
    // Dynamically allocate an integer.
    int* p = new int(10);
    std::cout << "Allocated integer: " << *p << std::endl;
    
    // Dynamically allocate an array.
    int* arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    
    std::cout << "Array elements: ";
    for (int i = 0; i < 3; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Manually free the allocated memory.
    delete p;
    delete[] arr;
    
    // To avoid dangling pointers, it's a good practice to set pointers to nullptr after deletion.
    p = nullptr;
    arr = nullptr;
    
    return 0;
}
