//43. Search element in array (Binary search)
// We have diffrent searching procress , one of them is binary search
// Usually it is studied deeply when studing DSA (data structures and algorithm), here we will just see this process how it is done
#include <stdio.h>

int binarysearch(int array[],int size,int target);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10}; // We must need a sorted array for binary search
    int size = sizeof(array)/sizeof(array[0]);
    int target = 8; // replace this number and try searching
    int result = binarysearch(array,size,target); // function output will be stored here
 
    printf("The target is : %d\n",target);
    
    if(result == -1){
        printf("The element is not found in array");
    }
    else{
        printf("The element is found at index : %d",result);
    }

    return 0;
}

int binarysearch(int array[],int size,int target){
    int start = 0; // start is the index of 1st array element
    int end = size-1; // end is the index of last element of array, as this is 0 based indexing so to get the end we have to minus 1 from the size of the array
    
    while(start <= end){
        int mid = start + (end-start)/2; // the value of mid will update in every loop
        if(array[mid] == target){return mid;} // if we found that element return this
        if(array[mid] < target){start = mid+1;} // if the target is bigger than mid we will shift the start to the next number to the mid, as searching below mid is useless
        if(array[mid] > target){end = mid-1;} // in this condition if the target is smaller than mid we will shift the end to the next number to the mid, as searching above the mid is useless
    }
    return -1; // When we are unable to find the element in array we will return this
}

/* Explanation : what is hapenning ? how this code works;
    let we have an array {1,2,3,4,5,6,7,8,9,10} , the target is to find 8
    so 1st we have to know th size of the array that is 10
    the indexing will be start = 0 (default) , end = size - 1 = 10 - 1 = 9
    now the mid will be 0 + (9 - 0)/2 = 4
    L1.so array[mid] = array[4] != target 
        array[4] = 5 , which is smaller than the target , now the start will be mid + 1 = index 5
    L2.in the next loop the search will work on {6,7,8,9,10} portion
        now the mid is = 5 + (9 - 5)/2 = 7
        array[mid] = array[7] = 8 , WOW! now the value of mid is equal to the target now the function will return mid
*/