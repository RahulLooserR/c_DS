#include "dfs.h"

void DFS (struct Graph* graph, int start)
{
	struct Node* temp = graph->array[start];
	
	graph->visited[start] = 1;
	printf ("%d -> ", start);

	while(temp){
		// checking if particular vertex is visited or not
		int vertex = temp->vertex;

		if (graph->visited[vertex] == 0){
			DFS(graph, vertex);
		}
		temp = temp->next;
	}
}
