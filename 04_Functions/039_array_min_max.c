//39. Find Min/Max in Array Using Function
// We are given a set of data(array) we have to separate the maximum one and minimum one
#include <stdio.h>

int maxofarray(int array[],int size);
int minofarray(int array[],int size);

int main(){
    int array[] = {45,12,56,98,23,65,89,56,78,15};
    int size = sizeof(array)/sizeof(array[0]);
    int max = maxofarray(array,size);
    int min = minofarray(array,size);

    printf("The maximum value stored in the array is %d\n",max);
    printf("The minimum value stored in the array is %d\n",min);
}

int maxofarray(int array[],int size){
    int max = array[0]; // we will set the max to the first element of array
    for (int i = 0; i < size; i++){
        if(max < array[i]){max = array[i];} // if this condition find a greater number than the stored number it will replace the number
    }
    return max; //after complete exetution this will return the value
}
int minofarray(int array[],int size){
    int min = array[0]; // we will set the min to the first element of array
    for (int i = 0; i < size; i++){
        if(min > array[i]){min = array[i];} // if this condition find a smaller number than the stored number it will replace the number
    }
    return min; // after complete exetution this will return the value
}