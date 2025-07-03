//4. Swap without using a third variable
//This is actually a conceptual one we will do it with sum methode
#include <stdio.h>

int main(){
    int a,b; // we are not declaring a third variable here
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the seconf number : ");
    scanf("%d",&b);

    //we will print to check in which variable which number is stored
    printf("The number stored in the variavle a is %d and b is %d \n",a,b);

    //swapping without third variable;
    /*we will update the value of a by the sum of a and b (a+b)
    1. now a has the value (a+b) 
    2. we will do b = a - b , b has its original value substracting the value of b from the sum will store the value of a in b
    3. now we will do a = a - b , after 2 has the value of a so if we substract the value of b(swapped a) we will get the value of b in a*/

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The number stored in the variavle a is %d and b is %d \n",a,b);

    return 0;
}

// we can do the same using other methods but that may be complicated
/* 1. multiplication methode :
    a = a*b ;
    b = a/b ;
    a = a/b ;
    
    2. XOR bitwise (not recomended for beginner) :
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b ;

    3. single life methode :
    b = (a + b) - (a - b);
    */