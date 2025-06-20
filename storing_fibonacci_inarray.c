#include <stdio.h>

int fibonacci(int i);

int main(){

    int n;
    int base = 0;

    printf("Enter the number of terms you want to print fibonacci : ");
    scanf("%d",&n);

    int array[n];

    for(int i =0 ; i<n ; i++){
        array[i] = fibonacci(i);
        printf("%d, ",array[i]);
    }
    
    return 0;
}

int fibonacci(int i){
    if(i == 0 ){return 0;}
    else if(i == 1 ){return 1;}
    else{ return fibonacci(i-1) + fibonacci(i-2);}
}