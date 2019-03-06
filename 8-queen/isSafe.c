#include "nQueenHeader.h"

// function to check if given position is safe for the queen

int isSafe (int board[][n], int row, int col)
{
	int i, j;

	// checking for horizontal left in matrix
	for (i = 0; i < col; i++){
		if (board[row][i] == 1)
			return 0;
	}   

	// checking for top left diagonal
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
		if (board[i][j] == 1)
			return 0;
	}   

	// checking for down-left diagonal
	for (i = row, j = col; i < n && j >= 0; i++, j--){
		if (board[i][j] == 1)
			return 0;
	}   

	return 1;

}

