#include "header.h"

void printDistFromSrc (int* dist, int src)
{
	int i;
	printf ("form	to	dist\n");
	for (i = 0; i < V; i++){
		printf ("%d   	%d 	%d \n", src, i, dist[i]);
	}
}
