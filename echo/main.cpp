#include <stdio.h>


int main(int length, char* args[]) {
    // пробежаться по массиву слов:
    for (int i = 1; i < length; i++)
        printf("%s ", args[i]);// печатая каждое слово на экран разделяя
        // их пробелом
    printf("\n");

    return 0;
}

