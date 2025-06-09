#include <stdio.h>

int main(){

    //Declaring a varible age to store age
    int age = 20; //my age
    // declaring a pointer to an interger to store the address of age
    int *age_pointer = &age; // & is the address of operator
    // decalating a pointer to a pointer to an integer to store the address of age_pointer
    int **age_pointer_pointer = &age_pointer; // & is the address of operator

   // Printing Value of age in diffrent ways
    printf("Value of age: %d\n", age); // Directly using the variable
    printf("Value of age using pointer: %d\n", *age_pointer); // Dereferencing the pointer
    printf("Value of age using pointer to pointer: %d\n", **age_pointer_pointer); // Dereferencing the pointer to pointer

    // Printing Address of age in diffrent ways
    printf("Address of age: %p\n", (void*)&age); // Address of the variable
    printf("Address of age using pointer: %p\n", (void*)age_pointer); // Address stored in the pointer
    printf("Address of age using pointer to pointer: %p\n", (void*)*age_pointer_pointer); // Address stored in the pointer to pointer
    printf("Address of age using pointer to pointer: %p\n", (void*)&age_pointer); // Address of the pointer itself
    printf("Address of age using pointer to pointer: %p\n", (void*)age_pointer_pointer); // Address stored in the pointer to pointer
    printf("Address of age using pointer to pointer: %p\n", (void*)&age_pointer_pointer); // Address of the pointer to pointer itself
    
    return 0;
}
