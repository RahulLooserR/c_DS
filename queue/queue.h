#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdio.h>
#define MAX 256 

struct Queue{
	int front;
	int rear;
	int queue[MAX];
};

void enqueue (struct Queue*, int data);
int dequeue (struct Queue*);
void print (struct Queue*);
int isQEmpty (struct Queue*);
struct Queue* createQueue(struct Queue*);

#endif
