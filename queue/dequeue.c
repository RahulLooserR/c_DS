#include "queue.h"

int dequeue (struct Queue* q)
{
	if (q->front == MAX || q->front > q->rear){
		printf ("Queue not valid\n");
		return -1;
	}
	return q->queue[q->front++];
}
