#include "bfs.h"

void BFS (struct Graph* graph, int src)
{
	struct Queue* q;
	int vertex; 
	// creating queue
	q = createQueue(q);

	// marking start node as visited node
	graph->visited[src] = 1;
	

	// enqueuing start node
	enqueue(q, src);

	// if queue is not empty
	while (!isQEmpty(q)){

		// dequeue current vertex
		vertex = dequeue(q);
		printf ("%d ", vertex);

		// coming back to dequeued vertex and traversing adjacent nodes
		struct Node* temp = graph->array[vertex];

		while (temp){
			int adjVertex = temp->vertex;
			
			// if node is not visited, mark it visited and enqueu it
			if(graph->visited[adjVertex] == 0){
				graph->visited[adjVertex] = 1;
				enqueue(q, adjVertex);
			}
			temp = temp->next;
		}
	}
}
