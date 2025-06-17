#include <stdio.h>

int manin(){

    int age = 20;

    int *ageptr;

    ageptr = &age; // Assign the address of age to ageptr

    printf("Age: %d\n", *ageptr); // Dereference ageptr to get the value of age
    printf("Address of age");

    return 0;
}