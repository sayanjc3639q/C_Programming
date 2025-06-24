#include <stdio.h>
void lowercase(char arr[]);
int count_vowel(char arr[]);
int main(){
    char word[] = "Pleuropneumonia";
    lowercase(word); 
    printf("The number of vowels in the word = %d", count_vowel(word));
    return 0;
}
void lowercase(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] + ('a' - 'A');
        }
    }
}
int count_vowel(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            count++;
        }
    }
    return count;
}