//31. Write a function to find factorial
//We have already did this withint the main function now its time to do it with functions;
/*We need to declare and define a function outside the main function
then we will call that function to work inside the main function*/
#include <stdio.h>
// we have to declare the function before we use it
int factorial(int n); // declaration of function , 
int main(){
    int input;
    printf("Enter the number you want to do factorial : ");
    scanf("%d",&input);

    //now in the main section we will use the function we have created
    long long output = factorial(input);
    printf("The factorial of %d is : %d\n",input,output);

    //Alternative printing
    printf("This the alternative way to print a function : %d",factorial(input));

    return 0;
}

int factorial(int n){ //defination of function , what the function will exactly do
    int result = 1;
    for(int i = 1; i <= n; i++){
        result =  result * i;
    }
    return result; // we will return the value we got after executing the function
}

/*Function syntax :
    return_type function_name (parameters with datatype){
        //function will go here
        return value;
        }

    USING FUNCTION INSIDE MAIN FUNCTION:
        int main(){
            function_name(parameters);
            return 0;
        }031_factorial_function.c
*/