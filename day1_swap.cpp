#include <iostream>
void swap(int *a, int *b){
    int temp = *a;  // store the value at address a in temp
    *a = *b;        // store the value at address b in the address a
    *b = temp;      // store the value in temp in the address b
}

int main()
{
    int x = 5;
    int y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(&x, &y);   // pass the variables addresses using the & operator
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    return 0;
}
