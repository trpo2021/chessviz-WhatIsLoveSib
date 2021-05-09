#include <stdio.h>
#include <ctype.h>
#include <libchessviz/print_board.h>
#include <libchessviz/move_figures.h>

int main()
{
	char chessBoard[9][9];
	
	int i, j;
	
	chessBoard[8][0] = ' ';
	chessBoard[0][1] = 'r';
	chessBoard[0][2] = 'n';
	chessBoard[0][3] = 'b';
	chessBoard[0][4] = 'q';
	chessBoard[0][5] = 'k';
	chessBoard[0][6] = 'b';
	chessBoard[0][7] = 'n';
	chessBoard[0][8] = 'r';
	
	for (i = 1; i < 9; i++) {
		chessBoard[1][i] = 'p';
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
			chessBoard[i][j] = ' ';
		}
	}
	
	
	for (i = 1; i < 9; ++i) {
		chessBoard[7][i] = toupper(chessBoard[0][i]);
		//printf("%c\n", chessBoard[7][i]);
	}
	
	print_board(chessBoard);
	move_figures(chessBoard);
	
}
	
	
