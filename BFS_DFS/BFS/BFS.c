#include "bfs.h"

void BFS (struct Graph* graph, int src)
{
	struct Queue q;
	q.front = -1; 
	q.rear = -1; 
	
	// assigning function pointer to the fucntions
	q.enqueue = enqueue;
	q.dequeue = dequeue;
	q.print = print;

	/* 
	q.enqueue(&q, data)
	q.dequeue(&q)
	q.print(&q)
	*/   
	q.enqueue (&q, src);
	graph->visited[src] = 1;

	struct Node* temp = graph->array[src];
	int vertex = q.dequeue(&q);

	while ()
		printf ("%d ", vertex);
	
		while (temp){
			q.enqueue(&q, temp->vertex);
			graph->visited[temp->vertex] = 1;
			temp = temp->next;
		}
		vertex = q.dequeue(&q);
	}
}
