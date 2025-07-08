//34. GCD and LCM Using Functions
/* GCD = Greatest common divisior and LCM =Lowest common multiplier
    we need to know a formula : GCD * HCF = a * b               */
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
    int input1,input2;
    printf("Enter two numbers : ");
    scanf("%d %d",&input1,&input2);

    printf("The GCD is %d \n",gcd(input1,input2));
    printf("The LCM is %d ",lcm(input1,input2));

    return 0;
}

int gcd(int a, int b) { 
    if (b == 0) return a; //base case
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

/* Explanation : the 1st function is using recursion calling himself
                if b = 0 , then a is the highest number so it will be gcd;
                if b != 0, then we will use a loop of recursion untill the second value get to 0
                gcd(a,0) = a
                if condition not satisfied we will reassign b as new a and a % b as new b
                this recursive loop will work until the 2nd value becomes 0
            2nd function :
                we already mentioned a formula above using this formula we will calculate the lcm
                , we already know th hcf/gcd , applyting that formula we will get the lcm.
*/

