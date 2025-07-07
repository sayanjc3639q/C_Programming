//27. Multiplication table
// easiest one using loop;
#include <stdio.h>

int main(){
    int n; // The table you want
    printf("Enter the table you want : ");
    scanf("%d",&n);

    printf("The Table of %d is : \n",n);
    for(int i =1; i <= 10 ; i++){ // the tables are basically start from 1 and ends at 10
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}

// Explanation : for tables the condition or initiation doesnot depend on the user input
/*  for the loop 1 when i is 1 it will print n * 1 = product;
    suppouse user input is 4 then
    loop 1: 4 x 1 = 4
    ...
    loop 10: 4 x 10 = 40;
*/