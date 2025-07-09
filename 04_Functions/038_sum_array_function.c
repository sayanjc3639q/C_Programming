//38. Sum of Array Using Function
// Arrays are a set of same type of data, represented as datatype array[] = {data1,data2,data3}
//In this problem we have to find out the sum of all digits present in a araray using a function;
#include <stdio.h>

int sumofarray(int array[], int size);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    //sizeof is a function that we can find the size of a array
    int size = sizeof(array)/sizeof(array[0]); //size of total array / size of 1st element of array will give the element size of array

    int result = sumofarray(array,size);

    printf("The sum of the array is %d",result);
    return 0;
}

int sumofarray(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size ; i++){ // to access an array we have to use a loop,
        sum = sum + array[i];
    }
    return sum;
}

// Explanation :
// let an array is arr[] = {1,2,3,4}
// then arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4
// That is how we acces the array 
// and rest of thing will happen like usual