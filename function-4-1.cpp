#include <iostream>
#include <vector>
#include <limits> 

int *readNumbers() {
    int *arr = new int[10];  
    std::cout << "Enter 10 numbers: ";

    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }

    return arr;  
}

int secondSmallestSum(int *numbers, int length) {
    if (length <= 1) return -1;  

    std::vector<int> sums;  

    for (int start = 0; start < length; start++) {
        int sum = 0;
        for (int end = start; end < length; end++) {
            sum += numbers[end];
            sums.push_back(sum);
        }
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for (size_t i = 0; i < sums.size(); i++) {
        int s = sums[i];
        if (s < smallest) {
            secondSmallest = smallest;
            smallest = s;
        } else if (s < secondSmallest && s != smallest) {
            secondSmallest = s;
        }
    }    

    return secondSmallest;
}