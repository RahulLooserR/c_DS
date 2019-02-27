#include "queue.h"

int main()
{
	int ch, data;
	struct Queue q;
	q.front = -1;
	q.rear = -1;
	
	q.enqueue = enqueue;
	q.dequeue = dequeue;
	q.print = print; 
	
	printf ("Queue implementation using function pointer and structure\n");
	printf ("=========================================================\n");

	while(1){
		printf ("\n1. Enqueue\n2. Dequeue\n3. Print\n4. Exit\n");
		printf ("Enter your choice : ");
		scanf ("%d", &ch);

		switch(ch){
			case 1:
				printf ("Enter the data to be enqueued: ");
				scanf ("%d", &data);
				q.enqueue (&q, data);
			break;

			case 2:
				printf("Element dequeued: %d\n", q.dequeue(&q));
			break;
			
			case 3:
				q.print(&q);
			break;

			case 4:
				return 0;
			break;

			default:
				printf ("!!! Wrong choice !!!, try again \n");
			break;
		}
	
	}

	return 0;
}
