#include <stdio.h>

int main (void) {

    char letter;
    scanf("%c", &letter);

    while(letter != '\n') {

        printf("%c", letter);
        scanf("%c", &letter);
    }
}