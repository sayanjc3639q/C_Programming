// This program shows how to reverse a number using recursion.
#include <stdio.h>

int reverse(int n); // Declaration of the reverse function

int main() { // Main function to execute the program
    int num, reversed;
    printf("Enter an integer: ");
    scanf("%d", &num);
    reversed = reverse(num);
    printf("Reversed Number: %d\n", reversed);
    return 0;
}

int reverse(int n) { // Definition of the reverse function
    static int rev = 0;
    if (n > 0) {
        rev = rev * 10 + n % 10;
        reverse(n / 10);
    }
    return rev;
}

// Alternative function (little variation)

 int _revserse(int n){
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}


