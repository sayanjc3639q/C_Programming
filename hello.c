// Write a function in C to print numbers that dont contain duplicate digits.
//eg. 11, 22, 33, 121, 100
// Same digit must not be repeated in the number.

#include <stdio.h>

int has_duplicate_digits(int num) {
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

void print_numbers_without_duplicates(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (!has_duplicate_digits(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
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

