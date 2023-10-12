#include <stdio.h>

// squares an integer and returns value
int square(int x) {
    x = x * x;
    printf("value inside square function: %d\n", x);
    return x;
}

// squares an array
void square_array(int array[5]) {
    int i = 0;
    while (i < 5) {
        array[i] = array[i] * array[i];
        i++;
    }
}

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    // call square, copying the value of input into `int x`
    input = square(input);
    printf("value after square: %d\n", input);

    // square array
    int array[5] = {1,2,3,4,5};
    square_array(array);

    // print updated array
    int i = 0;
    while (i < 5) {
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}