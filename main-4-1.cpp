#include <iostream>
#include "function-4-1.cpp"

int main() {
    int *numbers = readNumbers();  // Read input numbers

    int result = secondSmallestSum(numbers, 10);  // Find second smallest subarray sum

    std::cout << result << std::endl;  // Print result

    delete[] numbers;  // Free allocated memory

    return 0;
}
