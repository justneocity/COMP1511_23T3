// Basic Hello World program
// Marc Chee, September 2020

/* comment block
~ ~
0 0
 o
\_/
*/

// compile - dcc -o hello_world hello_world.c
// or dcc hello_world.c -o hello_world

// run program - ./hello_world
#include <stdio.h>

int main (void) {

    printf("~ ~\n"); // inline comment - avoid this
    printf("0 0\n");
    printf(" o \n");
    printf(" - \n");
    
    printf("~ ~\n"
            "0 0\n"
            " o \n"
            "\\_/\n");

    return 0;
}