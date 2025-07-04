//10. Use escape sequences in output
// some basic escape sequence are demonstrated here
// mostly used escape sequence are \n and \tableofcontents
#include <stdio.h>

int main(){
    printf("This is first line. \n");
    printf("This is second line.\t");
    printf("This line will print with 2nd line with tab.");

    printf("\n");

    // Printing qoute
    printf("He said \"I will always be there\"");
    printf("\n");

    //aleart
    printf("\aAlert! Check your console.\n");
    // To hear the aleart beep run this file in your windows/mac terminal
    // make sure your "Audible Bell" property is enabled for termial/powershell

    return 0;
}