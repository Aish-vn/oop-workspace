#include <iostream>
using namespace std; 

double array_mean(int array[], int n){
    if (n < 1) return 0.0; 

    double avg = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
        avg += sum/n;
    }
    return avg;
}