//Calculate the simple interest given principal,rate,and time.
#include <stdio.h>

int main(){
    float principal,rate,time,si;
    printf("Enter principal : ");
    scanf("%f",&principal);
    printf("Enter rate : ");
    scanf("%f",&rate);
    printf("Enter time : ");
    scanf("%f",&time);

    si = (principal*rate*time)/100;
    printf("Simple Interest = %f",si);
    return 0;
}