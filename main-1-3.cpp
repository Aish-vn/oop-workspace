#include <iostream>
using namespace std;

int num_count(int array[], int n, int number);

int main() {
    int array[] = {1,2,3,4,5};
    int n = 5;
    int number = 5;

    cout << "The number of elements in the array that are equal to the given perimeter is: " << num_count(array,n,number) << endl;
    return 0;
}