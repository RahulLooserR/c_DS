#include "header.h"

// function for creating new node
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->left = NULL;
	newNode->data = data;
	newNode->right = NULL;
	return newNode;
}
/* function definition for inserting node in the binary tree */

struct Node* insertNode (struct Node* root, int data)
{
	struct Node* newNode = createNode (data);
	
	// initial insertion when root is null
	if (root == NULL){
		root = newNode;
		return root;	
	}

	// inserting on left if data is less than root data
	if (data < root->data){
		root->left = insertNode(root->left, data);
		return root;
	}
	
	// inserting on right if data is greater than root data
	if (data > root->data){
		root->right = insertNode(root->right, data);
		return root;
	}

	else{
		printf ("Error: trying to insert same value\n");
		return root;
	}
}
