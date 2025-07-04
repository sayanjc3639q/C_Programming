//15. Classify character (vowel, consonant, digit, symbol)
// For this I will give you two solution 1. with additioanl library 2. with ASCII value
// 1. for this program we have to add a additional library
#include <stdio.h>
#include <ctype.h> //this libary contains the function to identify and transform alphabet

int main(){
    char input;

    printf("Enter your character : ");
    scanf("%c",&input);

    if(isdigit(input)){ // isdigit is a function checks if the character is digit or not
        printf("%c is a digit.",input); // all numbers from 0-9
    }
    else if(isalpha(input)){ 
        char lwc = tolower(input);//tolower is a function that convert uppercase to lower if input is uppercase
        if(lwc == 'a' || lwc == 'e' ||lwc== 'i' ||lwc == 'o' ||lwc == 'u' ){
            printf("%c is a vowel",input);
        } else{ printf("%c is a consonant",input);}
    } else{printf("%c is a symbol",input);}

    return 0;
}

//2. Without importing any library,
// This alternative will be written as a function

void character_classifier(){
    char input;
    printf("Enter your character : ");
    scanf("%c",&input);
    // as we are not including any library we have to write every function manually 
    // which functions we include with ctype.h
    if (input >= '0' && input <= '9'){
        printf("%c is a digit",input);
    }else if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
        char lwc = input; // lwc = lower character
        if(lwc >= 'A' && lwc <= 'Z'){
            lwc = lwc + ('a' - 'A'); // a has a higher ASCII value than A, beacuse upparcase letters are assigned to C first
        }
        if ( lwc == 'a' || lwc == 'e' || lwc == 'i' || lwc == 'o' || lwc == 'u'){
            printf("%c is a vowel");
        }else{ printf("%c is a consonant",input);}
    } else { printf("%c is a symbol",input);}

    //while using inside main function add return 0;
}

