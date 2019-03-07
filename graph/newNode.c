#include "adjList.h"

struct Node* newNode (int vertex)
{
	struct Node* node = (struct Node*) malloc (sizeof(struct Node));
	node->next = NULL;
	node->vertex = vertex;

	return node;
}
