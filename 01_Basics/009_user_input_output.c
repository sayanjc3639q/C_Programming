//9. Take user input and display back
#include <stdio.h>

int main(){
    int age; // declaring a integer variable
    char ch; // declaring a character variable
    float pi; // declaring a float variable
    char name[100]; // declaring a string variable with 100 space

    printf("Enter your age :");
    scanf("%d", &age);
    // Consume leftover newline
    getchar();
    printf("Enter a character (eg. b) :");
    scanf("%c", &ch);
    // Consume leftover newline
    getchar();
    printf("Enter the value of pi upto 2 decimal : ");
    scanf("%f", &pi);
    // Consume leftover newline
    getchar();
    printf("Enter your name : ");
    fgets(name, 100, stdin); // It is good to use fgets to input string , than scanf
    printf("\nYour name is %sYour age is %d years.\nYou entered the character %c.\nYou entered the value of pi %.2f.\n", name, age, ch, pi);

    return 0;
}