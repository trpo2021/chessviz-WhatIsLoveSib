#include <stdio.h>

int main()
{
	char chessBoard[9][9];
	
	int i, j;
	
	chessBoard[8][0] = ' ';
	chessBoard[0][1] = 'R';
	chessBoard[0][2] = 'N';
	chessBoard[0][3] = 'B';
	chessBoard[0][4] = 'Q';
	chessBoard[0][5] = 'K';
	chessBoard[0][6] = 'B';
	chessBoard[0][7] = 'N';
	chessBoard[0][8] = 'R';
	
	for (i = 1; i < 9; i++) {
		chessBoard[1][i] = 'P';
	}
	
	for (i = 1; i < 9; i++) {
		chessBoard[6][i] = 'P';
	}
	
	for (i = 1; i < 9; i++) {
		chessBoard[8][i] = '`' + i;
	}
	
	for (i = 0; i < 8; i++) {
		chessBoard[i][0] = '0' + (8 - i);
	}
	
	for (i = 2; i < 6; i++) {
		for (j = 1; j < 9; j++) {
			chessBoard[i][j] = '*';
		}
	}
	
	
	for (i = 1; i < 9; ++i) {
		chessBoard[7][i] = chessBoard[0][i];
		//printf("%c\n", chessBoard[7][i]);
	}
	
	
	
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			printf("%2c", chessBoard[i][j]);
		}
		printf("\n");
	}
}
	
	
