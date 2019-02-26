#include "header.h"

int top = -1;

int main()
{
	int ch, data;

	printf ("stack implementation  using array:\n");
	printf ("==================================\n");

	while(1){
		printf ("\n1. Push\n2. Pop\n3. Print\n4. Exit\n");
		printf ("Enter your choice : ");
		scanf ("%d", &ch);
		
		switch(ch){
			case 1:
				printf ("Enter the data: ");
				scanf ("%d", &data);
				push (data)	;
			break;

			case 2:
				printf ("Element popped %d\n", pop());
			break;

			case 3:
				print();
			break;

			case 4:
				return 0;
			break;

			default:
				printf ("!!! Wrong choice !!! \n");
			break;
		}
	}
}
