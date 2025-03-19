#include <iostream>
using namespace std; 

int sum_two_arrays(int array[], int secondarray[], int n); 

int main() {
    int array[] = {1,2,3,4,5};
    int secondarray[] = {1,1,1,1,1};
    int n = 5;

    cout << "The sum of the two arrays is: " << sum_two_arrays(array,secondarray,n) << endl; 
    return 0;
}