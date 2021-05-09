#include "print_board.h"
#include <stdio.h>

unsigned int i;
unsigned int j;

void print_board (char chessBoard[9][9]) {
    for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			printf("%2c", chessBoard[i][j]);
		}
		printf("\n");
	}
}