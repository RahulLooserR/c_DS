#include "header.h"

// function definition for printing the binary search tree
void printNode(struct Node* root)
{
	if (root == NULL){
		//	printf ("Tree empty\n");
		return;
	}

	// pre-order traversal
	printf ("%d ", root->data);
	printNode(root->left);
	printNode(root->right);
	printf ("\n");
}
