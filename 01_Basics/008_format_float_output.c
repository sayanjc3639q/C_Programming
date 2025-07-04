//8. Format floating-point output

#include <stdio.h>

// float numbers are number with decimel point eg. 2.562 is a float
// be we need to make presice the numbers after decimel , mainly for irrational numbers like pi
int main(){
    // The value of PI (google)= 3.141 592 653 589 793 238 462 643 383 279 502 884 197 169 399 375 10
    float pi = 3.1415926535; // taking first 10 digit after decimal
    double ppi = 3.141592653589793; // more presize value of pi
    // we are using double to get more bytes of data storage

    // Printing default value without any prescision control
    printf("The value of pi without any limitation : %f \n",pi); // default it will print 3.141593

    // Now printing the value of the pi more presise
    printf("The value of pi upto 2 decimal : %.2f \n",pi); // output : 3.14
    printf("The value of pi upto 5 decimal : %.5f \n",pi); // output : 3.14159

    // Value as exponential, %e for printing as exponetial
    printf("The value of pi is : %e \n",pi); //output : 3.141593e+000

    //printing the value of pi more presisely
    // we have to use double to print more presisely %lf --> long float
    printf("The value of pi is : %0.14lf", ppi); //output:

    return 0;
}