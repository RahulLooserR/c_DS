/* binary search tree program
   A binary search is a binary tree in which data which is less than 
   the root node will be on left link and data which is greater than 
   root node will be on right link
 */

#include "header.h"


int main()
{
	struct Node* root = NULL;
	int ch, data;

	printf ("Binary search tree implementation\n");
	printf ("=================================\n");

	while(1){
		printf ("\n1. Insert node\n2. Delete node\n3. Print node\n4. Exit\n");
		printf ("Enter your choice: ");
		scanf ("%d", &ch);

		switch(ch){
			case 1:
				printf ("Enter the value to be inserted: ");
				scanf ("%d", &data);
				root = insertNode(root, data);
				break;

			case 2:
				printf ("Enter the value to be deleted: ");
				scanf ("%d", &data);
				root = deleteNode(root, data);
				break;

			case 3:
				printNode(root);
				break;

			case 4:
				return 0;
				break;

			default:
				printf ("!!! Wrong choice !!!\n");
				break;

		}
	}

}
