// Make a function that 1. check prime number or 2. Print prime numbers up to a given number

#include <stdio.h>
#include <math.h>

int is_prime(int n); // Declaration of the prime checking function
int print_primes(int n); // Declaration of the function to print prime numbers up to n

int main(){
    int n;
    printf("Prime Number Calculator\n");
    printf("1. Check if a number is prime\n");
    printf("2. Print prime numbers up to a given number\n");
    printf("Enter your choice (1 or 2): ");
    int choice;
    scanf("%d", &choice);
    
    switch (choice){
        case 1:
            printf("Enter a number to check if it is prime: ");
            int num;
            scanf("%d", &num);
            if (is_prime(num)) {
                printf("%d is a prime number.\n", num);
            } else {
                printf("%d is not a prime number.\n", num);
            }
            break;
        case 2:
            printf("Enter a number to print all prime numbers up to that number: ");
            scanf("%d", &n);
            if (n < 2) {
                printf("There are no prime numbers less than 2.\n");
            } else {
                printf("Prime numbers up to %d:\n", n);
                print_primes(n);
            }
            break;
    }

    return 0;
}

int is_prime(int n) { // Function to check if a number is prime
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= sqrt(n); i++) { // Check divisibility from 2 to sqrt(n)
        if (n % i == 0) return 0; // If divisible, not prime
    }
    return 1; // If no divisors found, it is prime
}

int print_primes(int n) { // Function to print all prime numbers up to n
    for (int i = 2; i <= n; i++) { // Start from 2, as 0 and 1 are not prime
        if (is_prime(i)) { // function 2 calls function 1
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n"); // New line after printing all primes
}