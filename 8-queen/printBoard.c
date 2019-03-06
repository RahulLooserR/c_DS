#include "nQueenHeader.h"

// function to print board for n queen problem

void printBoard (int board[][n])
{
	int i, j;

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf ("%d ", board[i][j]);
		}
		printf ("\n");
	}   
}


