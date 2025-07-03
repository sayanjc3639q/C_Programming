// 3. Swap numbers using a temporary variable
/*We have seen declaring variable inside the code and scaning the function both types
we will use the scan type for taking input through the terminal gives user more flexibility*/
#include <stdio.h>

int main(){
    int a,b, temp;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the seconf number : ");
    scanf("%d",&b);

    //we will print to check in which variable which number is stored
    printf("The number stored in the variavle a is %d and b is %d \n",a,b);

    //swaping the numbers
    // as we dont take the temp varibale is empty
    temp = a; // as the temp is empty assiging the value of a will store the value of a in temp
    a = b; // now the value of a is overwritten by value of b, now a has the value of b
    b = temp; // now the value of a which we already stored in temp will be assigned to b
    // swapping succesful

    //using the same print function to check the numbers are now swapped
    printf("The number stored in the variavle a is %d and b is %d \n",a,b);

    return 0;
}