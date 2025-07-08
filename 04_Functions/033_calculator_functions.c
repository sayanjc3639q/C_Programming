//33. Calculator Using Functions
// We have to make a calculator using fucntions
//we already have made a calculator using switch here we will also use switch but the operations
// will be written as functions.
#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(){
    int input_1,input_2;
    char operation;
    printf("Enter the problem (eg. 1 + 1) : ");
    scanf("%d %c %d",&input_1,&operation,&input_2);

    switch (operation)
    {
    case '+':
        printf("Answer : %d ",add(input_1,input_2));
        break;
    case '-':
        printf("Answer : %d ",sub(input_1,input_2));
        break;
    case '*':
        printf("Answer : %d ",mul(input_1,input_2));
        break;
    case '/':
        printf("Answer : %d ",div(input_1,input_2));
        break;
    
    default:
        printf("!!! INVALID OPERATION !!!");
        break;
    }

    return 0;
}

int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a - b;
}
int mul(int a,int b){
    return a * b;
}
int div(int a,int b){
    return a / b;
}

// alternative : work the same expanded syntax
/* int add(int a,int b){
    int sum = a + b
    return sum;
}
int sub(int a,int b){
    int diff = a - b
    return diff;
}
int mul(int a,int b){
    int prdt = a * b;
    return prdt;
}
int div(int a,int b){
    int tms = a / b;
    return tms;
}
*/