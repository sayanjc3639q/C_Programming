//23. Sum of n natural numbers
//Printing the sum of n natural numbers starting from 0 to n;
#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n to print the sum upto n : ");
    scanf("%d",&n);

    int sum = 0; // declaring the initial sum to be 0;
    for(int i = 0 ; i <=n ; i++){ //Loop starts from 0 and the loop stops when the value of i will = n;
        sum = sum + i; //in every loop the sum will be updated
    }
    printf("The sum of numbers upto n is : %d",sum);
    return 0;
}

/*  Explanation : let user input the n = 5
    loop 1 : sum = 0 + 1    , now sum is = 1
    loop 2 : sum = 1 + 2    , now sum is = 3
    loop 3 : sum = 3 + 3    , now sum is = 6
    loop 4 : sum = 6 + 4    , now sum is = 10
    loop 5 : sum = 10 + 5   , now sum is = 15
    next loop will not run as the i = n (here 5);
*/