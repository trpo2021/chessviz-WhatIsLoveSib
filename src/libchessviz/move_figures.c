#include "move_figures.h"
#include <stdio.h>

void move_figures(char chessBoard[9][9]) 
{
    char move[6];
    scanf("%s", move);
    if (move[0] == 'a') {
        if (move[4] == '4') {
            chessBoard[6][1] = ' ';
            chessBoard[4][1] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][1] = ' ';
            chessBoard[5][1] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'a') {
        if (move[4] == '5') {
            chessBoard[1][1] = ' ';
            chessBoard[3][1] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][1] = ' ';
            chessBoard[2][1] = 'p';
        }
    }

    if (move[0] == 'b') {
        if (move[4] == '4') {
            chessBoard[6][2] = ' ';
            chessBoard[4][2] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][2] = ' ';
            chessBoard[5][2] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'b') {
        if (move[4] == '5') {
            chessBoard[1][2] = ' ';
            chessBoard[3][2] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][2] = ' ';
            chessBoard[2][2] = 'p';
        }
    }

    if (move[0] == 'c') {
        if (move[4] == '4') {
            chessBoard[6][3] = ' ';
            chessBoard[4][3] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][3] = ' ';
            chessBoard[5][3] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'c') {
        if (move[4] == '5') {
            chessBoard[1][3] = ' ';
            chessBoard[3][3] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][3] = ' ';
            chessBoard[2][3] = 'p';
        }
    }

    if (move[0] == 'd') {
        if (move[4] == '4') {
            chessBoard[6][4] = ' ';
            chessBoard[4][4] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][4] = ' ';
            chessBoard[5][4] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'd') {
        if (move[4] == '5') {
            chessBoard[1][4] = ' ';
            chessBoard[3][4] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][4] = ' ';
            chessBoard[2][4] = 'p';
        }
    }

    if (move[0] == 'e') {
        if (move[4] == '4') {
            chessBoard[6][5] = ' ';
            chessBoard[4][5] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][5] = ' ';
            chessBoard[5][5] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'e') {
        if (move[4] == '5') {
            chessBoard[1][5] = ' ';
            chessBoard[3][5] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][5] = ' ';
            chessBoard[2][5] = 'p';
        }
    }

    if (move[0] == 'f') {
        if (move[4] == '4') {
            chessBoard[6][6] = ' ';
            chessBoard[4][6] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][6] = ' ';
            chessBoard[5][6] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'f') {
        if (move[4] == '5') {
            chessBoard[1][6] = ' ';
            chessBoard[3][6] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][6] = ' ';
            chessBoard[2][6] = 'p';
        }
    }

    if (move[0] == 'g') {
        if (move[4] == '4') {
            chessBoard[6][7] = ' ';
            chessBoard[4][7] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][7] = ' ';
            chessBoard[5][7] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'g') {
        if (move[4] == '5') {
            chessBoard[1][7] = ' ';
            chessBoard[3][7] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][7] = ' ';
            chessBoard[2][7] = 'p';
        }
    }

    if (move[0] == 'h') {
        if (move[4] == '4') {
            chessBoard[6][8] = ' ';
            chessBoard[4][8] = 'P';
        }

        if (move[4] == '3') {
            chessBoard[6][8] = ' ';
            chessBoard[5][8] = 'P';
        }
    }

    // reverse side
    if (move[0] == 'h') {
        if (move[4] == '5') {
            chessBoard[1][8] = ' ';
            chessBoard[3][8] = 'p';
        }

        if (move[4] == '6') {
            chessBoard[1][8] = ' ';
            chessBoard[2][8] = 'p';
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%2c", chessBoard[i][j]);
        }
        printf("\n");
    }
}