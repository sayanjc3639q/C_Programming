//47. Count frequency of each element
#include <stdio.h>

// Define a maximum value for the elements in the array.
// This avoids "magic numbers" and makes the code more readable and easier to change.
#define MAX_ELEMENT_VALUE 10

int main(){
    int array[] = {1,2,2,5,4,8,9,8,9,5,6,7,4,5,8,9,6,3,5,1,2,4,1,5,4,8,9,6};
    int size = sizeof(array)/sizeof(array[0]);

    // The frequency array's size is based on the maximum possible element value.
    // Index 'i' of this array will store the count of the number 'i'.
    int frequency[MAX_ELEMENT_VALUE] = {0};

    // First loop: Iterate through the input array to count each element.
    for (int i = 0; i < size ; i++){
        // Add a check to prevent writing outside the frequency array's bounds
        // if the input array contains a number >= MAX_ELEMENT_VALUE.
        if (array[i] < MAX_ELEMENT_VALUE) {
            frequency[array[i]]++;
        }
    }

    printf("Frequency of each element:\n");
    // Second loop: Iterate through the frequency array to print the results.
    for (int i = 0; i < MAX_ELEMENT_VALUE ; i++){
        // Only print the frequency if the element appeared at least once.
        if(frequency[i] != 0){
            printf("%d occurs %d times\n",i,frequency[i]);
        }
    }
    return 0;
}

// Explanation :
// The program uses a technique called a "direct access array" or "counting array".
// 1. We create a `frequency` array, large enough to hold counts for every possible element value (0 up to MAX_ELEMENT_VALUE - 1).
//    `int frequency[MAX_ELEMENT_VALUE] = {0};` creates an array for numbers 0-9, initialized to all zeros.
// 2. We loop through the original `array`. For each number we find, we use that number as an *index* into our `frequency` array and increment the count.
//    For example, when the code sees the first element `1`, it increments `frequency[1]`.
// 3. After the first loop, `frequency[i]` holds the total count of the number `i`.
// 4. The second loop simply prints out the number `i` and its count `frequency[i]` for all numbers that have a count greater than zero.
// This method is very fast but uses extra memory. It's best suited for when the range of numbers in the input array is reasonably small.
