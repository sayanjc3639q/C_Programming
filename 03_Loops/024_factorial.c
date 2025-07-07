//24. Factorial of a number
// Factorial : the factorial is the product of all the number from 1 to n
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int factorial = 1; //Default
    for(int i = 1; i <= n ; i++){ //here the factorial will start from 1, because 0! and 1! = 1
        factorial = factorial * i;
    }
    printf("The factorial of %d is (%d!) = %d",n,n,factorial);
    return 0;
}

/*  Explanation : let user input is 5
    loop 1 : factorial = 1 * 1 = 1
    loop 2 : factorial = 1 * 2 = 2
    loop 3 : factorial = 2 * 3 = 6
    loop 4 : factorial = 6 * 4 = 24
    loop 5 : factorial = 24 * 5 = 120
    -- loop ends here beacuse i = n (here 5)
    */