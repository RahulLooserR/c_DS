#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#define MAX 256 

struct Queue{
	int front;
	int rear;

	void (*enqueue) (struct Queue*, int data);
	int (*dequeue)(struct Queue*);
	void (*print)(struct Queue*);
	int queue[MAX];
};
	
	void enqueue (struct Queue*, int data);
	int dequeue (struct Queue*);
	void print (struct Queue*);


#endif
