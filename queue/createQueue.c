#include "queue.h"

struct Queue* createQueue (struct Queue* q)
{
	q = (struct Queue*) malloc (sizeof(q));
	q->front = -1;
	q->rear = -1;

	return q;
}

