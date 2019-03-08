#include "queue.h"

int isQEmpty (struct Queue* q)
{
	return (q->front == MAX || q->front > q->rear);
}
