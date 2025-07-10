//43. Search element in array (linear search)
// this is more simple than binary search, but it is less efficient than binary search
//in linier search the program will go through all the elements present in the array verifying the element
#include <stdio.h>

int linersearch(int array[],int size,int target);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 8;
    int result = linersearch(array,size,target);
    printf("The target is : %d\n",target);

    if(result == -1){
        printf("The element is not found in array");
    }
    else{
        printf("The element is found at index : %d",result);
    }
    return 0;
}

int linersearch(int array[],int size,int target){
    for (int i = 0; i < size ; i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

// Explnation : suppouse we have an array {1,2,3,4,5,6,,7,8,9,10}
// in linier search the function will verify every single element
// array[0] != target ............. array[7] = target , now the loop stops and return the index value
