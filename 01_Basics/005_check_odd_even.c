//5. Check whether number is odd or even
// take input from the user then check the number is even or odd
#include <stdio.h>

int main(){
    int input_number;
    printf("Enter your number : ");
    scanf("%d",&input_number);

    // to check the number is even or odd we will use the modulus operator,
    // modulous (%) operator returns the reminder
    // we know the number that are even is divisible by 2 so the reminder will be 0;
    if(input_number % 2 == 0){ // this logic checks the number is even or odd
        printf("The number you input (%d) is even",input_number);
    } else{ // the number that is not even is odd.
        printf("The number you input (%d) is odd",input_number);
    }

    return 0;
}