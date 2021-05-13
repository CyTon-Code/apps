#include <stdio.h>


int main(int length, char* args[]) {
    // iterate over an array of words:
    for (int i = 1; i < length; i++)
        printf("%s ", args[i]);// display of each word on the screen
        //  separated by a space
    printf("\n");

    return 0;
}

