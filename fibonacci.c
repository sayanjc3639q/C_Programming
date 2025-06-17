// Print the Fibonacci sequence up to a given number of terms.

#include <stdio.h>

int fibonacci(int n); // Declaration of the Fibonacci function

//Main function to execute the program
int main(){
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);
    if (n < 0) { // Negetive cannot be accepted 
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Print the Fibonacci sequence up to n terms in various orders
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {  // Starts from 0 to n-1 (total n terms including 0) , update i by 1 
        printf("%d ", fibonacci(i));
    }

    //Print Fibonacci in reverse order
    printf("\n");
    printf("Fibonacci sequence up to %d terms in reverse order:\n", n);
    for (int i = n - 1; i >= 0; i--) { // Starts from n-1 to 0 (total n terms including 0), update i by -1
        printf("%d ", fibonacci(i));
    }

    // Printing Fibonacci with even indices
    /*To print only the Fibonacci series with only even indices start normally but the i
    mean the nth term updated by 2 */
    printf("\n");
    printf("Fibonacci sequence up to %d terms in reverse order with even indices:\n", n);
    for (int i = n - 1; i >= 0; i -= 2) {
        printf("%d ", fibonacci(i));
    }

    // Printing Fibonacci with odd indices
    // To print odd we need to start from n-2 and update i by -2
    printf("\n");
    printf("Fibonacci sequence up to %d terms in reverse order with odd indices:\n", n);
    for (int i = n - 2; i >= 0; i -= 2) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
  
    return 0;
}

int fibonacci(int n) { //Definition of the Fibonacci function
    if ( n == 0){ return 0; } // Base case for Fibonacci sequence f(0) = 0
    else if ( n == 1){ return 1; } // Base case for Fibonacci sequence f(1) = 1
    else { return fibonacci(n - 1) + fibonacci(n - 2); } // Recrusive Function
}