#include <iostream>
using namespace std;

void two_five_nine(int array[], int n) {
    // Initialize counters
    int num_twos = 0, num_fives = 0, num_nines = 0;

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                num_twos++;
                break;
            case 5:
                num_fives++;
                break;
            case 9:
                num_nines++;
                break;
            default:
                break; // Ignore other numbers
        }
    }

    // Print the result in the required format
    cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";" << endl;
}
