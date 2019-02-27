#include "queue.h"

void enqueue (struct Queue* q, int data)
{
	if (q->rear == MAX - 1 || q->front == MAX - 1){
		printf ("Can't enqueue, Queue full\n");
		return;
	}

	if ( q->rear == -1 && q->front == -1){
		q->rear += 1;
		q->front += 1;
		q->queue[q->rear] = data;
	}
	else{
		q->rear += 1;
		q->queue[q->rear] = data;
	}

}
