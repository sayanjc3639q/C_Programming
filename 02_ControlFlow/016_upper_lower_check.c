//16. Check if alphabet is uppercase or lowercase
// in program 015, we already have seen a library ctype, here i aslo show both
#include <stdio.h>
#include <ctype.h>

int main(){
    char user_input;
    printf("Enter a alphabet : ");
    scanf("%c",&user_input);

    // isupper : checks for uppercase | islower : checks for lowercase

    if(isupper(user_input)){
        printf("%c is a uppercase letter",user_input);
    }else if(islower(user_input)){
        printf("%c is a lowercase letter",user_input);
    } else{ printf("your input is not a valid alphabet");}

    return 0;
}

// Alternative methode using ASCII value
void mains(){
    char user_input;
    printf("Enter a alphabet : ");
    scanf("%c",&user_input);

    // isupper : checks for uppercase | islower : checks for lowercase

    if(user_input >= 'A' && user_input <= 'Z'){
        printf("%c is a uppercase letter",user_input);
    }else if(user_input >= 'a' && user_input <= 'z'){
        printf("%c is a lowercase letter",user_input);
    } else{ printf("your input is not a valid alphabet");}

    //return 0 at end if placed inside main function
}