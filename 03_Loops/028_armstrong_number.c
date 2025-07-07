// 28. Armstrong number
// The concept of Armstrong number is little bit tricky
// Armstrong number : these are the numbers which are the sum of the digit raise to the power no of digit of it own digit
// 153 is a Armstrong number, so it has 3 digit, so we will raise it to the power 3 then sum it
// 1^3 + 5^3 + 3^3 = 3 +125 +27 = 153
// We need a special library in this case to reduce complexity of program
#include <stdio.h>
#include <math.h>

int main(){
    int original; // user input
    printf("Enter the number to check if the number is Armstrong number or not :");
    scanf("%d",&original);

    //we will create a copy of the original to do tests,
    int copy = original;

    // first we need to count how many digits there are in the input number
    int n = 0; // we will use the n to count the number
    while(copy != 0){
        copy = copy / 10;
        n++;
    }
    // Now the value of copy is became 0, we need to restore it
    copy = original;

    //now we have to calculate to the power of the digits and sum these
    int sum = 0; // the initial value is set to 0;
    while(copy != 0){
        sum = sum + pow(copy % 10,n);
        copy = copy / 10;
    }
    // Now its time to check are the conditions meet or not
    if(sum == original){
        printf("%d is Armstrong number",original);
    }else{
        printf("%d is not a Armstrong number",original);
    }

    return 0;
}

/*  When you run this code you will not get the result you want, because pow return a double type
    when we try to compare a integer with double data type values will not match,*/
// In this case we have to make a external function to run this

int power(int digit,int n){
    int result = 1;
    for(int i = 1; i <=n;i++){
        result = result * digit;
    }

    return result;
}