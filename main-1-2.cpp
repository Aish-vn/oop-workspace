#include <iostream>
using namespace std;

double array_mean(int array [], int n);

int main() {
    int array[] = {1,2,3,4,5};
    int n = 5;

    cout << "The mean of the elements in the array is: " << array_mean(array,n) << endl;
    return 0;
} 