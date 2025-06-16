<<<<<<< HEAD
//Calculate the factorial of a number using recursion

#include <stdio.h>

int factorial(int n); // Declaration of the factorial function

// Main function to execute the program

int main() {
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit with error code
    }
    
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0; // Exit successfully
}

int factorial(int n) { // Definition of the factorial function
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
=======
//Calculate the factorial of a number using recursion

#include <stdio.h>

int factorial(int n); // Declaration of the factorial function

// Main function to execute the program

int main() {
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit with error code
    }
    
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0; // Exit successfully
}

int factorial(int n) { // Definition of the factorial function
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
>>>>>>> 88500897636fb9c7df191d5ce289e5fc6b7a2b42
}