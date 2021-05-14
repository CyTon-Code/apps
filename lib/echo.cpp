#ifndef ant_echo
#define ant_echo

#include <stdio.h>

// displaying arguments
void echo(int length, char* args[]) {
    // iterate over an array of words:
    for (int i = 1; i < length; i++)
        printf("%s ", args[i]);// display of each word on the screen
        //  separated by a space
    printf("\n");
}

#endif // ant_echo
