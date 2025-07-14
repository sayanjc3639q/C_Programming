//48. Remove duplicates
// We'll tackle this by checking every element against every other element.
// If we find a duplicate, we'll use our delete function to remove it.
#include <stdio.h>

// Function prototypes - telling the compiler what functions we're going to use.
void printarray(int array[],int size);
void deleteelement(int array[],int* size,int position);


int main(){
    int array[] = {1,2,2,5,4,8,9,8,9,5,6,7,4,5,8,9,6,3,5,1,2,4,1,5,4,8,9,6};
    int size = sizeof(array)/sizeof(array[0]);
 
    printf("The default array is : ");
    printarray(array,size);
 
    // The plan is to go through each element...
    for (int i = 0; i < size; i++) {
        // ...and for each one, we'll check all the elements that come *after* it.
        for (int j = i + 1; j < size; j++) {
            // If we find a match, it's a duplicate!
            if (array[i] == array[j]) {
                // Let's get rid of the duplicate at position j.
                // We pass j+1 because our delete function uses 1-based positions, not 0-based index.
                deleteelement(array, &size, j + 1);
                
                // Super important! Since we just deleted an element, the element that was at j+1
                // is now at j. If we just let the loop increment j, we'd skip checking it.
                // So, we nudge j back by one to make sure we check the new element at the current spot.
                j--; 
            }
        }
    }
 
    printf("The array with duplicates removed is: ");
    printarray(array,size);
    
    return 0;
}

// A simple function to print out the contents of our array.
void printarray(int array[],int size){
    for (int i = 0; i < size ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

// This function deletes an element from a specific position.
void deleteelement(int array[],int* size,int position){
    // We need to shift all the elements after the deleted one to the left.
    // The loop starts at the index we want to remove.
    for (int i = position-1; i < *size-1 ; i++){
        // Just copy the next element into the current spot.
        array[i] = array[i+1];
    }
    // After shifting everything, the effective size of the array is one less.
    (*size)--; 
}