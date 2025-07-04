//12. Check if number is positive, negative, or zero
#include <stdio.h>

//This is one of the easiest programm
int main(){
    int number;
    printf("Enter your number : ");
    scanf("%d",&number);

    //conditional statement
    if (number > 0){
        printf("%d is a positive number",number);
    } else if(number < 0){
        printf("%d is a negetive number",number);
    } else {
        printf("The number is 0");
    }

    return 0;
}