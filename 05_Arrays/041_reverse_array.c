//41. Reverse an array
// Already we have done reversing a number it is something like that
#include <stdio.h>

// Instead of using same thing multiple time in main function we create a function to do that
// It is easy to use the function other than writting syntax multiple times;
void printarray(int array[],int size);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    printf("The default array is : ");
    printarray(array,size);


    for (int i = 0; i < (size/2) ; i++){ // The same concept of reversing a number is applied here
        int temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
    printf("The reversed array is : ");
    printarray(array,size);
    return 0;
}


void printarray(int array[],int size){
    for (int i = 0; i < size ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
