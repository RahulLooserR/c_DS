#include "nQueenHeader.h"

// function to check if solution exists or not

int nQueen (int board[][n], int col)
{
	int i;

	if (col >= n)
		return 1;

	for(i = 0; i < n; i++){
		if (isSafe(board, i, col)){
			board[i][col] = 1;
			
			// recursively calling nQueen
			if (nQueen(board, col + 1))
				return 1;

			board[i][col] = 0; //backtracking
		}

	}

	return 0;
}


