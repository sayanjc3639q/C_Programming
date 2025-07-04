//13. Simple calculator using switch
#include <stdio.h>

//This will be a basic calculator using switch function
//outcomes : swtich is a better version of if-else statement
int main(){
    int a,b;
    char choice;

    printf("==== SIMPLE CALCULATOR ==== \n");
    printf("Enter your number 1 : ");
    scanf("%d",&a);
    printf("Enter your number 2 : ");
    scanf("%d",&b);
    printf("Enter your operation (eg.+,-,/,*):");
    scanf(" %c",&choice); //Note : add a spcae before %c to avoid whitespcae

    //Must use break statement after every case to exit the program
    //Otherwise all below operations will also be auto executed
    switch (choice)
    {
    case '+':
        printf("The Sum of %d and %d = %d",a,b,a+b);
        break;
    case '-':
        printf("The diffrence between %d and %d = %d",a,b,a-b);
        break;
    case '*':
        printf("The product of %d and %d = %d",a,b,a*b);
        break;
    case '/': //for division we need to add this condtitional statement to avoid calc error
        if(b == 0){
            printf("Error!!! Division by 0 not possible");
        }else{
            printf("%d is %d times of %d",a,a/b,b);
        }
        break;
    default:
        printf("Invalid Operation");
        break;
    }
    
    return 0;
}

// NOTES:
/* 1.You can declare sum = a+b , diff = a-b .....

   2.Youmay use external functions with parameters like
        int sumoftwo(int a,int b){
            int sum = a + b;
            return sum} 

    3. You can also add function like square, modulous, square root
        for this type of operation add a library "math.h"
        pow(a,2) and sqrt(a,2)
*/