// 44. Insert element at given position
// 1st we have to make a spcae for the array and shift all the elements after the inserting point
#include <stdio.h>

void insetelement(int array[],int size, int target,int position);
void printarray(int array[],int size);


int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 55;
    int position = 5; // Remember this is position not index, position 5 = index 4
    printf("The default array is : ");
    printarray(array,size);
    insetelement(array,size,target,position);
    printf("The new array is : ");
    printarray(array,size);
    return 0;
}

void insetelement(int array[],int size, int target,int position){
    size++; // We have to increase the spcae of the array to insert an element
    for (int i = size; i >= position ; i--){ // from the postion to the end of array this loop will create a space fot the new element
        array[i] = array[i-1];
    }
    array[position-1] = target; 
}

void printarray(int array[],int size){
    for (int i = 0; i < size ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

/* Explanation : let we have an array {5,8,3,7,4,9}
    we want to insert an element (1) at position 3
    we will run the function insertelement() it will increase the size of array by 1
    {5,8,3,7,4,9,_}, then it will start shifting elementd from the last to dedicated position
    {5,8,3,7,4,_,9}
    {5,8,3,7,_,4,9}
    {5,8,3,_,7,4,9}
    {5,8,_,3,7,4,9} , now the 3rd position gets empty now we can add the target value here
    {5,8,1,3,7,4,9} DONE 
*/