//36. Prime Check Using Function
// We already have did this without using a fucntion now it will be easy using functions
#include <stdio.h>
#include <math.h> // I will use a sqrt function so I included this library
#include <stdbool.h> // For logics

int check_prime(int a);

int main(){
    int input;
    printf("Enter the number to check if it is prime or not : ");
    scanf("%d",&input);

    if(check_prime(input)){
        printf("%d is prime number.",input);
    }else{
        printf("%d is not prime number.",input);
    }

    return 0;
}

int check_prime(int a){
    if(a <= 1){return false;} // 0 and 1 are non prime numbers
    for (int i = 2 ; i <= sqrt(a); i++){
        if (a % i == 0){return false;}
    }
    return true; //if other two conditions not applicable this will return true
}