#include <iostream>
#include "function-3-2.cpp"

int main() {
    int *numbers = readNumbers();  
    int *reversed = reverseArray(numbers, 10);  
    printnumbers(reversed, 10);
    bool result = equalsArray(numbers, reversed, 10);  

    std::cout << (result ? "true" : "false") << std::endl;

    delete[] numbers;
    delete[] reversed;

    return 0;
}
