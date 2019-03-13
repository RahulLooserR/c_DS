#include "header.h"

void dijkstra (int graph[V][V], int src)
{
	int dist[V] = {INFINITY};
	int markedVertex[V] = {0};
	int i, j, minIndex, minVal;

	// intialising distance to infinity
	for (i = 0; i < V; i++)
		dist[i] = INFINITY;
	
	dist[src] = 0;
	markedVertex[src] = 1;
	minIndex = src;
	
	// initial distance from source
	for (i = 0; i < V; i++){
		if (i == src)
			continue;

		if (graph[src][i] != 0)
			dist[i] = graph[src][i];
	}

	for (i = 0; i < V; i++) {
		// finding min Index from distance array
		minIndex = findMin (dist, markedVertex);
		markedVertex[minIndex] = 1;
	
		// adding the minvalue to min ditance from source
		for (j = 0; j < V; j++) {
			if (graph[minIndex][j] != INFINITY && graph[minIndex][j] != 0)
				if (markedVertex[j] == 0 && (graph[minIndex][j] + dist[minIndex] < dist[j])){
					dist[j] = graph[minIndex][j] + dist[minIndex];

				}

		}

	}

	printDistFromSrc (dist, src);
}
