//11.Find max between two numbers
#include <stdio.h>

//For this question we will use conditional statement if-else
int main(){
    int num_1, num_2;
    printf("Enter your number 1 :");
    scanf("%d",&num_1);
    printf("Enter your number 2 : ");
    scanf("%d",&num_2);

    if(num_1 > num_2){
        printf("%d is greater than %d",num_1,num_2);
    }else{
        printf("%d is greater than %d",num_2,num_1);
    }

    return 0;
}

// NOTE : We can aslo use ternary operator to find the max, we will do this in this chapter later