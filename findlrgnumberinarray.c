#include <stdio.h>


int main(){
    int n = 3;
    int count  = 0;
    int array[10] = {1,5,8,7,6,3,2,4,7,1};

    int largest = array[0];
    for(int i = 1; i < 10; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    printf("Largest number in the array: %d\n", largest);

    

    return 0;
}