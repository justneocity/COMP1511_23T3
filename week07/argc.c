#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // print out count of arguments
    printf("argc = %d\n", argc);

    // print out strings in argv array
    printf("Argument values:\n");
    for(int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    

    return 0;
}
