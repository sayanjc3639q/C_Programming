//40. Pass Pointer to Function
//Pointer is a conceptual thing should be studied in a dedicated chapter but when we are learning
//functions pointers plays an important role.
/* 1st we have to learn about 2 concepts 1. pass by value and 2. Pass by reference*/
#include <stdio.h>

void passbyvalue(int value);
void passbyreference(int* value);

int main(){
    int value = 18; // We set a value 
    printf("The default value is : %d\n",value);
    passbyvalue(value); //Running this function
    printf("The value after pass by value : %d\n",value);
    passbyreference(&value); //Running this function
    printf("The value after pass by reference : %d",value);

    return 0;
}

void passbyvalue(int value){ //pass by value will not effect the value at main function
    value = 10;              // This will just change the value inside this function
}
void passbyreference(int* value){ //pass by reference will effect the value at main function
    *value = 10;                   // The value will updated
}

// Explanation : The pointer has a notation int* variablename;