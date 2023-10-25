#include <stdio.h>

void halve_values(int *num_1, int *num_2, int *num_3);

int main(void) {
    // initialise 3 variables
    int num_1 = 4;
    int num_2 = 10;
    int num_3 = 16;

    // print before halving
    printf("Values before halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    // half the variables
    halve_values(&num_1, &num_2, &num_3);

    // print after halving
    printf("Values after halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    return 0;
}

// function to halve values
// takes 3 int arguments
void halve_values(int *num_1, int *num_2, int *num_3) {
    *num_1 = *num_1 / 2;
    *num_2 = *num_2 / 2;
    *num_3 = *num_3 / 2;
}