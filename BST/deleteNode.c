#include "header.h"
// function definition for finding min value in right subtree
struct Node* minValue(struct Node* node)
{
	struct Node* temp = node;
	while(temp->left)
		temp = temp->left;

	return temp;
}

// function definition for deleting node from binary search tree
struct Node* deleteNode(struct Node* root, int data)
{
	if (root == NULL){
		return root;
	}

	if (data < root->data){
		root->left = deleteNode(root->left, data);
	}
	else if (data > root->data){
		root->right = deleteNode(root->right, data);
	}

	else if (data == root->data){
		// Deleting node having no child or leaf node
		if (root->left == NULL && root->right == NULL){
			struct Node* temp = root;
			free(temp);
			return root;	
		}
		if (root->left == NULL){
			struct Node* temp = root->right;
			free(root);
			return temp;
		}
		if (root->right == NULL){
			struct Node* temp = root->left;
			free(root);
			return temp;
		}
		root->right = minValue(root->right);
	}
	else{
		printf ("data not found\n");
		return NULL;
	}

}
