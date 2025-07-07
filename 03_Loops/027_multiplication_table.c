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