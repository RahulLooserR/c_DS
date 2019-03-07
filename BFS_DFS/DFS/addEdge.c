#include "adjList.h"

// function to add an edge between source and destination vertices of the given graph

void addEdge (struct Graph* graph, int srcEdge, int destEdge)
{
	struct Node* node = newNode(destEdge);	
	node->next = graph->array[srcEdge];
	graph->array[srcEdge] = node;

	// since it is undirected graph , we need to create link from both sides.
	node = newNode (srcEdge);
	node->next = graph->array[destEdge];
	graph->array[destEdge] = node;

}
