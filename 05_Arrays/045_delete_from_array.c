//45. Delete element from array
//First we have inserted a element to the array now its time to remove an element
#include <stdio.h>

void deleteelement(int array[],int* size,int position);
void printarray(int array[],int size);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int position = 5;
    printf("The default array is : ");
    printarray(array,size);
    deleteelement(array,&size,position);
    printf("The new array is : ");
    printarray(array,size);
    return 0;
}

void deleteelement(int array[],int* size,int position){
    for (int i = position-1; i < *size-1 ; i++){ //just like opposite of inserting an element this loop will reposition all other elements with the blank space;
        array[i] = array[i+1];
    }
    *size--; // after arrangement this will decrease the array size by 1
}

void printarray(int array[],int size){
    for (int i = 0; i < size ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

// Explanation for the deleteelement() function
// int i = position - 1 , this will set the initial value of i at the index of the unwanted element
// i < *size-1 , as usual it will run upto end of array
// array[i] = array[i+1] , this will shift the elements