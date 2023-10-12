#include <stdio.h>

#define MAX_SIZE 1000

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char string[]) {
    int i = 0; // counter
    while (string[i] != '\0') { // condition 
        printf("%c", string[i]); // body
        i++; //increment
    }
    printf("\n");
}

int main (void) {
    //char my_string[] = "Many Chars";

    // don't use scanf(%s) to scan in strings - use fgets instead
    char my_string[MAX_SIZE];
    fgets(my_string, MAX_SIZE, stdin);
    print_string(my_string);
    
    return 0;
}