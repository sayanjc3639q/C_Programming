//there is a series than goes like 1234567891011121314151617181920.....
//Objective is to find out the nth term of this series
#include <stdio.h>
#include <math.h>

int getNthDigit(int n) {
    int digitLength = 1;
    long long count = 9;
    long long start = 1;
    // Step 1: Find the digit range (1-digit, 2-digit, 3-digit...)
    while (n > digitLength * count) {
        n -= digitLength * count;
        digitLength++;
        count *= 10;
        start *= 10;
    }
    // Step 2: Find the actual number containing the digit
    long long number = start + (n - 1) / digitLength;
    // Step 3: Find the digit in that number
    int digitIndex = (n - 1) % digitLength;
    // Convert number to string to access the digit easily
    char numStr[21];
    sprintf(numStr, "%lld", number);
    return numStr[digitIndex] - '0';
}

int main() {
    int n;
    printf("Enter n (1-based position): ");
    scanf("%d", &n);
    int result = getNthDigit(n);
    printf("The %dth digit is: %d\n", n, result);
    return 0;
}