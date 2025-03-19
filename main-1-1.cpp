#include <iostream>
using namespace std;

int array_sum(int array[], int n); 

int main() {
    int array[] = {1,2,3,4,5};
    int n = 5;

    cout << "The sum of all elements in the array is: " << array_sum(array, n) << endl;
    return 0;
}
int array_sum(int array[], int n);

int main() {
    int arr[] = {1,2,3,4,5}; 
    int n = 5;

    cout << "The sum of the array is " <<array_sum(arr,n) << endl;
    return 0;
}
