//21. Print numbers 1 to 100
//for printing series we use a syntax called the loops
//there are 3 types of loops for, while and do-while loop
#include <stdio.h>

// 1. Using for loop : 
int main(){

//Syntax: for(initial state; condition of loop ; update)
    // initially i is 1, because we have to print from 1. and the condition is i <=100 because we have to print all the numbers between 1 and 100 so we will print all the number which are less than hundred and equal to hundred, and after every loop we will update the i by 1, i = i + 1 in short hand i++
    for(int i = 1; i <= 100 ; i++){ 
        printf("%d,",i);
    }
    return 0;
}

// 2. Using while loop :
void function(){

    /*Syntax : 
        initial value;
        while(condition){ what to do; update;}*/
    int i = 1;
    while(i <= 100){
        printf("%d,",i);
        i++;
    }

    // or
    while(i <=100){
        printf("%d",i++); // this will be more compact syntax;
    }
}