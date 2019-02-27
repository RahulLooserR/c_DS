#include "queue.h"

void print (struct Queue* q)
{
	int i;

	for(i = q->front; i <= q->rear; i++)
		printf("%d ", q->queue[i]);
	
	printf("\n");

}
