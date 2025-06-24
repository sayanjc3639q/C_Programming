#include <stdio.h>
#include <string.h>

int word_to_number(const char *word) {
    if (strcmp(word, "zero") == 0) return 0;
    if (strcmp(word, "one") == 0) return 1;
    if (strcmp(word, "two") == 0) return 2;
    if (strcmp(word, "three") == 0) return 3;
    if (strcmp(word, "four") == 0) return 4;
    if (strcmp(word, "five") == 0) return 5;
    if (strcmp(word, "six") == 0) return 6;
    if (strcmp(word, "seven") == 0) return 7;
    if (strcmp(word, "eight") == 0) return 8;
    if (strcmp(word, "nine") == 0) return 9;
    if (strcmp(word, "ten") == 0) return 10;
    if (strcmp(word, "eleven") == 0) return 11;
    if (strcmp(word, "twelve") == 0) return 12;
    if (strcmp(word, "thirteen") == 0) return 13;
    if (strcmp(word, "fourteen") == 0) return 14;
    if (strcmp(word, "fifteen") == 0) return 15;
    if (strcmp(word, "sixteen") == 0) return 16;
    if (strcmp(word, "seventeen") == 0) return 17;
    if (strcmp(word, "eighteen") == 0) return 18;
    if (strcmp(word, "nineteen") == 0) return 19;
    if (strcmp(word, "twenty") == 0) return 20;
    if (strcmp(word, "thirty") == 0) return 30;
    if (strcmp(word, "forty") == 0) return 40;
    if (strcmp(word, "fifty") == 0) return 50;
    if (strcmp(word, "sixty") == 0) return 60;
    if (strcmp(word, "seventy") == 0) return 70;
    if (strcmp(word, "eighty") == 0) return 80;
    if (strcmp(word, "ninety") == 0) return 90;
    return -1;
}

int words_to_number(const char *words) {
    int result = 0, temp = 0;
    char word[32];
    int pos = 0;
    for (int i = 0; ; i++) {
        char c = words[i];
        if (c == ' ' || c == '\0') {
            word[pos] = '\0';
            if (strcmp(word, "hundred") == 0) {
                temp *= 100;
            } else if (strcmp(word, "thousand") == 0) {
                temp *= 1000;
                result += temp;
                temp = 0;
            } else if (pos > 0) {
                int val = word_to_number(word);
                if (val >= 0) temp += val;
            }
            pos = 0;
            if (c == '\0') break;
        } else if (c != '-') {
            word[pos++] = c;
        }
    }
    result += temp;
    return result;
}

int main() {
    char input1[] = "ten";
    char input2[] = "five hundred fifty six";
    char input3[] = "two thousand three hundred forty five";
    printf("\"%s\" -> %d\n", input1, words_to_number(input1));
    printf("\"%s\" -> %d\n", input2, words_to_number(input2));
    printf("\"%s\" -> %d\n", input3, words_to_number(input3));
    return 0;
}

