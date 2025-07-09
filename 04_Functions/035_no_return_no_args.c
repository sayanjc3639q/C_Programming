//35. Function with No Return and No Arguments
//each fucntion has a return type, but void is a type that returns nothing
#include <stdio.h>

void printdata();

int main(){
    printdata();
    return 0;
}

void printdata(){
    printf("This function returns noting.");
}

/* We have to define the data type which the function will return after executing all operations
    like int , float , char and another return type is void, that do tasks but return nothing
    when to use : when we dont need any return value, all tasks are done inside the fucntion
    then we will use the void data type.
*/
