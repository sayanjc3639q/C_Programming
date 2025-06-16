// Write a function in C to print numbers that dont contain duplicate digits.
//eg. 11, 22, 33, 121, 100
// Same digit must not be repeated in the number.

#include <stdio.h>

//Loop explanation: The function has_duplicate_digits checks if a number has duplicate digits by using an array to count occurrences of each digit.
//while loop: It iterates through the digits of the number by repeatedly taking the last digit (num % 10) and reducing the number (num /= 10).
// if condition: It checks if the count of the current digit is greater than zero, indicating a duplicate.
//

int has_duplicate_digits(int num) { //detect if a number has duplicate digits
    int digit_count[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        if (digit_count[digit] > 0) {
            return 1; // Duplicate found
        }
        digit_count[digit]++;
        num /= 10;
    }
    return 0; // No duplicates
}

//for loop explanation: The function print_numbers_without_duplicates iterates through a range of numbers from start to end.
//

void print_numbers_without_duplicates(int start, int end) { //print numbers without duplicate digits in a given range
    for (int i = start; i <= end; i++) {
        if (!has_duplicate_digits(i)) { //!has_duplicate_digits(i) checks if the number has duplicate digits
            printf("%d ", i);
        }
    }
}

int main() { //main function to execute the program
    int start;
    int end;
    printf("Enter the start range: ");
    scanf("%d", &start);
    printf("Enter the end range: ");
    scanf("%d", &end);
    printf("Numbers without duplicate digits between %d and %d:\n", start, end);
    print_numbers_without_duplicates(start, end);
    return 0;
}