#include <iostream>

int main()
{
    // 1. The concept of reference

    int original = 50;
    int &ref = original; // ref become a pseudonym for original
    std::cout << "Original: " << original << std::endl;
    ref = 100; // changing the value via the reference
    std::cout << "Modified original via reference: " << original << std::endl;
    std::cout << "\n-----------------------------------------------\n\n";

    // 2. Dynamic Memory reservation in the heap

    int *heapPtr = new int; //Reservation a space for an integer in Heap
    *heapPtr = 200; // Assigning a value to the reserved space
    std::cout << "Dynamic Memory value: " << *heapPtr << std::endl;
    std::cout << "Memory Address in Heap: " << heapPtr << std::endl;
    
    // 3. Memory release (very important to avoid memory leaks)

    delete heapPtr;
    heapPtr = nullptr; // Unloding the indicator to avoid dangling pointer
    std::cout << "\nMemory successfully released!" << std::endl;
    return 0;
}
