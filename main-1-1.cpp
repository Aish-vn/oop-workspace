#include <iostream>
using namespace std;

int array_sum(int array[], int n);

int main() {
    int arr[] = {1,2,3,4,5}; 
    int n = 5;

    cout << "The sum of the array is " <<array_sum(arr,n) << endl;
    return 0;
}