#ifndef ADJLIST_H
#define ADJLIST_H

#include <stdio.h>
#include <stdlib.h>

// node for adjacency list
struct Node {
	int vertex;
	struct Node* next;
};


// graph having number of vertices and array of adjacency lists as attribute
struct Graph {
	int vertices;
	struct Node** array;
};

// function prototype for printing the adjacency list of graph
void printGraph (struct Graph*);

// function prototype to add an edge to the given vertices
void addEdge (struct Graph*, int, int);

// function to create graph with given number of vertices.
struct Graph* createGraph (int);

// function to create new node
struct Node* newNode (int);


#endif
