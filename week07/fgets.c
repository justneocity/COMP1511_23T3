#include <stdio.h>
#define MAX_LETTERS 100

int main (void) {

    char my_line[MAX_LETTERS];
    while (fgets(my_line, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", my_line);
    }
    return 0;
}
