#include <stdio.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'}, 
        {' ', 'O', ' ', 'X', ' '}, 
        {' ', 'X', 'O', ' ', ' '}, 
        {'O', 'O', ' ', 'O', 'O'}, 
        {'O', ' ', ' ', ' ', 'Z'}, 
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };


    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // TODO Implement this function.

    // case 1: diagonal win
    int row = 0;
    int col = 0;
    int left_diagonal_count = 0;
    int right_diagonal_count = 0;
    while (row < SIZE) {
        col = 0;
        while (col < SIZE) {
            if (row == col && board[row][col] == player) {
                left_diagonal_count++;
            } 
            if (row == SIZE - 1 - col && board[row][col] == player ) {
                right_diagonal_count++;
            }
            col++;
        }
        row++;
    }

    // if whole diagonal, then player has won
    if (left_diagonal_count == SIZE || right_diagonal_count == SIZE) {
        return TRUE;
    }

    // case 2: horizontal win
    row = 0;
    col = 0;
    int horizontal_count = 0;
    while(row < SIZE) {
        col = 0;
        horizontal_count = 0;
        while (col < SIZE) {
            if (board[row][col] == player) {
                horizontal_count++;
            }
            col++;
        }
        // at end of each row, check if encountered 5 player characters
        if (horizontal_count == SIZE) {
            return TRUE;
        }
        row++;
    }

    // case 3: vertical win
    row = 0;
    col = 0;
    int vertical_count = 0;
    while(col < SIZE) {
        row = 0;
        vertical_count = 0;
        while (row < SIZE) {
            if (board[row][col] == player) {
                vertical_count++;
            }
            row++;
        }
        // at end of each column, check if encountered 5 player characters
        if (vertical_count == SIZE) {
            return TRUE;
        }
        col++;
    }

    // if none of the above cases are TRUE, return FALSE
    return FALSE;
}