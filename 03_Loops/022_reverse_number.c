//22. Reverse a number
//Reversing a number means user input = 12345 , we want to get the output = 4321
#include <stdio.h>

//we dont know the initial point , so here we have to use the while loop,
int main(){
    int input; 
    printf("Enter the number : ");
    scanf("%d",&input);

    int r = 0; // we will let a vatiable name it r, r = reminder
    int reversed_number = 0; // in this variable the result will be stored
    // in this program we are bascially removing a number from the input and storing it in the reversed_number
    while(input != 0){ // The loop will run untill the input turns into 0; that mean all numbers are removed
        r = input % 10; // This statement will remove the number from the last
        reversed_number = reversed_number * 10 + r; // The removed number will store at the reversed_number
        input = input / 10; // UPDATE the input for the next loop
    }

    //Outside the loop we will print the number after the loop ends 
    printf("Reversed number = %d",reversed_number);
    return 0;
}

/*  EXPLANATION : let user input a number '1234'
    r = 0 and reversed_number = 0;
    loop 1: r = 1234 % 10 = 4 , reversed_number = 0 *10 + 4 = 4, input = 1234 / 10 = 123
    loop 2: r = 123 % 10 = 3 , reversed_number = 4 *10 + 3 = 43, input = 123 / 10 = 12
    loop 3: r = 12 % 10 = 2 , reversed_number = 43 *10 + 2 = 432, input = 12 / 10 = 1
    loop 4: r = 1 % 10 = 1, reversed_number = 432 *10 + 1 = 4321, input = 1 / 10 = 0
    *loop 5 : This loop will not run because the condition is input != 0, but here the input becomes 0
    so the loop will stop here.
     */