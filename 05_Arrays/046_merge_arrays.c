//46. Merge two arrays
#include <stdio.h>

void printarray(int array[],int size);

int main() {
    int numberset1[] = {1,2,3,4,5}, numberset2[] = {6,7,8,9,10}; //we take two arrays
    int size1 = sizeof(numberset1)/sizeof(numberset1[0]); // size of 1st one
    int size2 = sizeof(numberset2)/sizeof(numberset2[0]); // size of 2nd one
    printf("The first array is : ");
    printarray(numberset1,size1); // print the 1st array individually
    printf("The second array is : ");
    printarray(numberset2,size2); // print the 2nd array individually

    int size3 = size1 + size2; // The size of new array will be the total size of two arrays
    int numberset3[size3]; 

    for (int i = 0; i < size1 ; i++){ //this loop adds numbers of 1st set
        numberset3[i] = numberset1[i];
    }
    for (int i = size1; i <size3 ; i++){ //this loop adds numbers of 2nd array
        numberset3[i] = numberset2[i-size1];
    }

    printf("The merged array is : ");
    printarray(numberset3,size3);
    return 0;

}

void printarray(int array[],int size){
    for (int i = 0; i < size ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
