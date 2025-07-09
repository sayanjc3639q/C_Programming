//37. Recursively Print Digits of a Number
// We have to use recursion to print the digits of the input number;
#include <stdio.h>

void printdigit(int a);

int main(){
    int input;
    printf("Enter the number :");
    scanf("%d",&input);
    printdigit(input);

    return 0;
}

void printdigit(int a){
    if(a < 10){printf("%d   ",a);return;}
    printdigit(a/10);
    printf("%d   ",a % 10);
}

