#include "header.h"

int findMin (int* dist, int* markedVertex)
{
	int min, i, j, minIndex;

	min = INFINITY; 
	for (j = 0; j < V; j++){
		if (markedVertex[j] == 0 && dist[j] <= min){ 
			min = dist[j];
			minIndex = j;
		}
	}
	return minIndex;
}
