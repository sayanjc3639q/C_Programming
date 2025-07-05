//17. Menu-driven program using switch
// We have already made a program using switch function to make a simple calculator
// here a upgrad we will made by adding a menu.
#include <stdio.h>

int main(){
    int choice;
    int a,b;
    printf("Calculator with menu \n");
    // Print a menu for the user
    //input the two numbers on which that operation will be done
    printf("Enter you number 1 : ");
    scanf(" %d",&a);
    printf("Enter you number 2 : ");
    scanf(" %d",&b);

    printf("1.Addition \n");
    printf("2.Substraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    printf("Enter your choice (eg, 1,2,3,4): ");
    scanf(" %d",&choice); // take user's choice as input

    // before we use signs in switch case but now we replaced it by a menu
    // must remeber to use the break to avoid any inconvinice.
    switch (choice)
    {
    case 1:
        printf("You have choosen Addition  %d + %d = %d",a,b,a + b);
        break;
    case 2:
        printf("You have choosen Substraction  %d - %d = %d",a,b,a - b);
        break;
    case 3:
        printf("You have choosen Multiplication %d * %d = %d",a,b,a * b);
        break;
    case 4:
        printf("You have choosen  Division %d / %d = %d",a,b,a / b);
        break;
    
    default:
        printf("Invalid choice"); //Printing this statement secures that user will not choose anything other than the option available in the menu list
        break;
    }

    return 0;
}