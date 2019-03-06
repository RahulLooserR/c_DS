#ifndef NQUEENHEADER_H
#define NQUEENHEADER_H

#include <stdio.h>
#include <string.h>

int n;

void printBoard (int board[][n]);

int isSafe (int board[][n], int row, int col);

int nQueen (int board[][n], int col);

#endif

