#include <iostream>

int *readNumbers() {
    int *arr =new int[10]; 
    std::cout << "Enter 10 numbers, press enter after each entry: ";
    
    for (int i = 0; i < 10; i++) {
        std::cin >> arr [i];
    }
    return arr;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

bool equalsArray(int *numbers1, int *numbers2, int length) {
    if (length < 1) return false;

    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;  
        }
    }

    return true;  
}

int *reverseArray(int *numbers, int length) {
    int *reversed = new int[length];  

    for (int i = 0; i < length; i++) {
        reversed[i] = numbers[length - 1 - i];  
    }

    return reversed;  
}

void printnumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}
