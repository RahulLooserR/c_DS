#ifndef _HEADER_H
#define _HEADER_H

#define MAX 5
#include <stdio.h>

int stack[MAX];
extern int top;

void push(int data);
int pop();
void print();

#endif
