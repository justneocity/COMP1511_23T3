// COMP1511 Week 2 tutorial exercise

#include <stdio.h>

int main (void) {

    // declare AND intialise a and b
    // note: initialing in this case isn't compulsory as we have scanf,
    // but if you don't have scanf, make sure to initialise.
    int a = 0;
    int b = 0;

    // scan in values for a and b
    scanf("%d %d", &a, &b);

    if (a < b) {
        // If the a is less than the b, 
        // print out a short error message.
        printf("error 1\n");

    } else if (b == 0) {
        // If the second integer(b) is 0, 
        // print out a different short error message.
        printf("error 2\n");

    } else if (a > b) {
        // If the a is larger than b, 
        // prints `a / b` and `(a * 1.0) / (b * 1.0)`
        int result1 = a / b;
        int result2 = (a * 1.0) / (b * 1.0);

        printf("result1 = %d, result2 = %d\n", result1, result2);
        
    }

    return 0;
}