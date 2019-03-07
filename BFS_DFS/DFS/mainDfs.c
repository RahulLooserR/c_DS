#include "dfs.h"

int main ()
{	
	struct Graph *graph = createGraph(5);
	addEdge (graph, 0, 1);
	addEdge (graph, 0, 2);
	addEdge (graph, 0, 3);
	addEdge (graph, 1, 3);
	addEdge (graph, 2, 3);
	addEdge (graph, 3, 4);
	
	printGraph(graph);
	
	DFS(graph, 0);
	printf ("\n");

	return 0;
}
