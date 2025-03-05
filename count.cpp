// implementing the count function to return the number of even numbers

int count(int array[], int n) {
    int evenCount = 0;
    // looping through the array and counting even numbers
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
    }

    return evenCount;
    
}