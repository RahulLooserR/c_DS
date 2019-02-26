#ifndef _HEADER_H
#define _HEADER_H

#include <stdio.h>
#include <stdlib.h>

// structure for node
struct Node{
	struct Node* left;
	int data;
	struct Node* right;
};

// prototype for inserting node in the binary search tree
struct Node* insertNode(struct Node* root, int data);
struct Node* deleteNode(struct Node* root, int data);
void printNode(struct Node* root);

#endif
