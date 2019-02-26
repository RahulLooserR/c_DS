#include "header.h"

void push (int data)
{
	if (top == MAX-1){
		printf("stack overflow\n");
		return;
	}

	top += 1;
	stack[top] = data;

}
