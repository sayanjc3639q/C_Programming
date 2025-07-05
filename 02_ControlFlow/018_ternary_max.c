//18. Use ternary operator to find max
//we will use the ternary operator to find out the maximum number
int main(){
    int num_1, num_2;
    printf("Enter your number 1 :");
    scanf("%d",&num_1);
    printf("Enter your number 2 : ");
    scanf("%d",&num_2);

    int result = (num_1 > num_2 ? num_1 : num_2);
    // Explanation of this ternary operator
    // This operator will check the if the num1 is greater ,if true return num1 if false return num2

    printf("The maximum number is : %d",result);

    return 0;
}

/*Note : How ternary operator works : 
    Syntax : (condition ? return_if_true : return_if_false )
    
    similar to if(condition){return value}else{return value} */