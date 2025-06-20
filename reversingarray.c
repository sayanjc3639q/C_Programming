#include <stdio.h>

int main(){
    
    int temp;
    int n = 5;
    int array[5] = {1,2,3,4,5};

    printf("The main array is :");
    for(int i=0 ; i<n ; i++ ){
        printf("%d \t",array[i]);
    }

    for(int i = 0; i < (n/2); i++){
        temp = array[0+i];
        array[0+i] = array[n-1-i];
        array[n-1-i] = temp;
    }

    printf("\nnew swap array is :");
    for(int i=0 ; i<n ; i++ ){
        printf("%d \t",array[i]);
    }
    
    return 0;
}