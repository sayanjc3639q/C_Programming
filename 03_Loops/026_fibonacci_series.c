//26. Fibonacci series up to n terms
// Fibonacci Series : A series which has the numbers which are the sum of its previous two numbers
// The series look like : 0 1 1 2 3 5 8 13 21 ......
#include <stdio.h>

int  main(){
    int n; // the series will be print upto nth term
    printf("Enter the n th term of fibonnaci :");
    scanf("%d",&n);

    //At first we have to declare the base condition the 1st term is 0 and 2nd term is 1
    int nm1t = 0; // value of n-1 th term
    int nm2t = 1; // value of n-2 th term
    int num; //value of n term

    for(int i = 0; i <= n; i++){
       printf("%d, ",nm1t);
       num = nm1t + nm2t;
       nm1t = nm2t;
       nm2t = num ;

    }
    return 0;
}

//Explanation of the for loop :
/*  Intitially we have to declare the base condition that the 1st and 2nd term is respectively
    0 and 1. The user input when 0; the loop runs for 1 time and print 0 as nm1t = 0;
    User input = 2 ; loop will run 2 times, 1st loop-> 0; 2nd loop the variables are updated
    num = 1 + 0, sot the nm1t will be nm2t = 1 and nm2t will update to 1 also;

    suppouse user input is 5:
    loop 1: print > 0 | update : num > 1 , nm1t > 1 , nm2t > 1
    loop 2: print > 1 | update : num > 2 , nm1t > 1 , nm2t > 2
    loop 3: print > 1 | update : num > 3 , nm1t > 2 , nm2t > 3
    loop 4: print > 2 | update : num > 5 , nm1t > 3 , nm2t > 5
    loop 5: print > 3 | update : num > 8 , nm1t > 5 , nm2t > 8
    --- loop ends here;
    

*/