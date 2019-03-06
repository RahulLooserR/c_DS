#include "nQueenHeader.h" 

int main()
{
	printf ("Enter the order of board: ");
	scanf ("%d", &n);
	int board[n][n];

	memset ((void *) board, 0, sizeof(board));
	printBoard (board);

	if (nQueen(board, 0)){
		printf ("\n");
		printBoard(board);
	}
	else{
		printf ("No solution exists.. \n");
	}
		
	return 0;
}
