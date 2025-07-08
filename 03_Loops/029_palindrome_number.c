//29. Palindrome Number
// Palindrome : this is a special type of number which is same while reading from both side
// 1234321 is a palindrome ; reading from both side will be the same;
#include <stdio.h>

int main(){
    int input;
    printf("Enter your number to check the number is palindrome or not : ");
    scanf("%d",&input);

    int reversed = 0 ;
    int test = input;
    while(test != 0){
        reversed = 10 * reversed + (test % 10);
        test = test / 10;
    }

    if (reversed == input){printf ("The number is palindrome.");}
    else{printf("The number is not palindrome.");}

    return 0;
}

// Explanation : We will use the same of concept of reversing numbers , here one step ahed we
// will check the reversed number is same as the original input or not