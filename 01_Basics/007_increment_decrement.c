//7. Demonstrate use of increment/decrement
#include <stdio.h>

// there are two types increament and decrement, pre and post
int main(){
    int x = 5 ; // declared a variable 

    // Post increment : First use then increase by 1
    printf("The value of x = %d \n",x++); //after printing 5 now the value of x is 6

    // Pre increment : First increase by 1 then print the value
    printf("The value of x = %d \n",++x); //after increasing the value to 7 it is printed

    // Post decrement : First use then decrease by 1
    printf("The value of x = %d \n",x--); // after printing 7 now the value of x is 6

    // Pre decrement : First decrease by 1 then print the value
    printf("The value of x = %d \n",--x); // after decreasing the value to 5 it is printed

    return 0;
}

// NOTE : x++ or ++x is equivalant to x = x + 1 
// same : x-- or --x is equivalant to x = x - 1
// the postion of the operation decides when to run the operation
