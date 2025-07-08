//32. Use recursion for Fibonacci
// Recursion : it is a type of function syntax where we call the function inside a function to solve problem
#include <stdio.h>

int fibonacci(int n);

int main(){
    int input;
    printf("Enter the nth term upto which you want to print the fibonacci:");
    scanf("%d",&input);

    for(int i = 0; i <= input ; i++){
        printf("%d  ",fibonacci(i));
    }

    return 0;
}

int fibonacci(int n){
    //declare the base case
    if(n == 0){return 0;} 
    else if (n == 1){return 1; }
    else{ return fibonacci(n-1) + fibonacci(n-2);}
}
