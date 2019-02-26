#include "header.h"

void print()
{
	int i;
	if (top == -1){
		printf ("stack empty\n");
		return;
	}

	for (i = 0; i <= top; i++)
		printf ("%d ", stack[i]);
	
	printf ("\n");

}
