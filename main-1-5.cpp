#include <iostream>
using namespace std;

int count_evens(int number);

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; 

    cout << "The count of even numbers from 1 to " << number << " is: " << count_evens(number) << endl;
    return 0;
}