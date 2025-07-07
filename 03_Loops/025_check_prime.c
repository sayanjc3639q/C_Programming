//25. Check prime number
// We will be doing this without using a function or external librery
//It can also be done with boolean library but we will do that later.
#include <stdio.h>

int main(){
    int n, isPrime = 1; //assume prime initially
    printf("Enter the number to check prime or not: ");
    scanf("%d", &n);
    if(n <= 1) {
        isPrime = 0;
    } 
    else{
        for(int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime){
        printf("%d is a prime number.\n", n);
    }else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}

/*Explanation : by default we have to declare 0 and 1 are non prime 
    then we have to check is the number divisible by any number from 2 to square root of that number.
    why square root : because if we found any number that can divide the input before the squareroot.
    it must be divided by those number more than the square root.
    for example :
    36 = 1 * 36
    36 = 2 * 18
    36 = 3 * 12
    36 = 4 * 9
    36 = 6 * 6
    ... then it will start reapeting the factors , so we check the numbers upto square root
    */

