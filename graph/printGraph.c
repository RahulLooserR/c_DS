#include "adjList.h"

// function to print adjacency list of the graph
void printGraph (struct Graph* graph)
{
	int i;

	for(i = 0; i < graph->vertices; i++){
		struct Node* temp = graph->array[i];
		printf ("%d -> ", i);

		while (temp){
			printf ("%d -> ", temp->vertex);
			temp = temp->next;
		}
		printf ("/ \n");
	}
}
