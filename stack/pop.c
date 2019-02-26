#include "header.h"

int pop()
{
	if (top == -1){
		printf("stack underflow\n");
		return -1;
	}

	return stack[top--];
}
