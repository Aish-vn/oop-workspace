#include <iostream> 
#include "function-1-1.cpp"

int main() {
    int *numbers = readNumbers();
    printNumbers(numbers, 10);
    delete[] numbers;
    return 0;
}