#include <stdio.h>

int main(void) {

    int row = 0;
    while (row < 4) {
        int col = 0;
        while (col < 4) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
    return 0;
}