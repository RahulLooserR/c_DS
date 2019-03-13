#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>


#define INFINITY 10000

#define V 9

void dijkstra (int graph[V][V], int src);
int findMin (int*, int*);
void printDistFromSrc (int*, int);

#endif 
