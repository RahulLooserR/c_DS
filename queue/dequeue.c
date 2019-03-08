#include "queue.h"

int dequeue (struct Queue* q)
{
	if (isQEmpty(q)){
		printf ("Queue not valid\n");
		return -1;
	}
	return q->queue[q->front++];
}
