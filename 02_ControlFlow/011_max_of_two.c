//11.Find max between two numbers
#include <stdio.h>

//we will use the ternary operator to find out the maximum number
int main(){
    int num_1, num_2;
    printf("Enter your number 1 :");
    scanf("%d",&num_1);
    printf("Enter your number 2 : ");
    scanf("%d",&num_2);

    int result = (num_1 > num_2 ? num_1 : num_2);

    printf("The maximum number is : %d",result);

    return 0;
}