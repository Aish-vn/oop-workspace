#include <iostream>
#include "function-2-1.cpp"

int main() {
    int *numbers = readNumbers();
    hexDigits(numbers, 10);
    delete[] numbers;
    return 0;
}
