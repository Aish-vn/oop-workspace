#include <iostream>
using namespace std;

int min_element(int array[], int n);

int main() {
    int array[] = {9,4,6,3,8};
    int n = 5;

    cout << "The minimum value (smallest element) in the array is: " << min_element(array,n) << endl;
    return 0;
}