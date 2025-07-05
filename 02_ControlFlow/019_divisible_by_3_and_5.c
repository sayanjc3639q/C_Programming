//19. Number is divisible by both 3 and 5?
// This program will be a good practice for the condtions (eg. AND)
#include <stdio.h>  

int main(){
    int input_number;
    printf("Enter you number to check the divisibility by 3 and 5 :");
    scanf("%d",&input_number);

    if( input_number % 3 == 0 && input_number % 5 == 0){
        printf("The number is both divisible by 3 and 5");
    }else { printf("The number is not divisible by both 3 and 5");}

    return 0;
}