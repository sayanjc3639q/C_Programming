// 2. Sum of two numbers
#include <stdio.h>

int main(){
    // declare variables 
    int a = 5; // we have to put this value
    int b = 8; // we have to put this value
    int sum; // we are expected to get this value

    sum = a + b; // we do not need to declare the variable again

    // now we will print the sum we have calculated
    printf("The sum is : %d ",sum); //printf(" %_format_specifier_of_variable",varibale)
    // we must need to declare the varible type before printing here we get integer so we use %d
    // for character %c and for float %f

    return 0;
}

// alternative : by taking input from the user
    void alternative_main(){
        int a, b, sum; // we will not assign value here we will take input from user
        printf("Enter the first number : ");
        scanf("%d",&a); // syntax : scanf("format_specifier",&variable)
        printf("Enter the second number : ");
        scanf("%d",&b);

        sum = a + b; // calculate the sum , same as before

        printf("The sum is : %d",sum);
        
     // when using insdie int main() function add return 0; 
    }