//Take two integers as input from the user and print their sum.
#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);

    int sum;
    sum = num1 + num2;
    printf("SUM = %d",sum);
    return 0;
}
    