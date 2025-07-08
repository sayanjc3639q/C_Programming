//30. Sum of Digits
// Objective : we have to calculate the sum of the digits present in a number
// eg. 123 > 1 + 2 + 3 = 6
#include <stdio.h>

int main(){

    int input;
    printf("Enter the number to calculate the sum of the digits : ");
    scanf("%d",&input);

    int sum = 0;
    while(input != 0){
       sum = sum  + (input%10);
       input = input / 10;
    }

    printf("The sum of the digits is : %d ", sum);

    return 0;
}