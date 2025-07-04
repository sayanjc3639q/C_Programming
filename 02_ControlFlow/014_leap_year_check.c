//14. Check leap year
#include <stdio.h>

// Checking a year is leap or not have a set of conditions
// 1. If a year is divisible by 4;
// 2. But a year which is divisible by 100 is not a leap year unless 3
// 3. The year must be divisible by both 400 and 100 to be a leap year
int main(){
    int year;
    printf("! Check the year is a normal or a leap year! \n");
    printf("Enter your year : ");
    scanf("%d",&year);
// && : Act as AND gate, both condition true have to br true
// || : Act as OR gate , any one of the condition has to be true 
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }

    return 0;
}
