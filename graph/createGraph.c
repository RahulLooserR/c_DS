#include "adjList.h"

// function to create graph with given number of vertices
struct Graph* createGraph (int vertices)
{
	struct Graph* graph = (struct Graph*) malloc (sizeof(struct Graph));
	graph->vertices = vertices;
	graph->array = malloc (sizeof(struct Node) * vertices);

	int i;
	for (i = 0; i < vertices; i++){
		graph->array[i] = NULL;
	}

	return graph;
}
