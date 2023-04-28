#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <stdio.h>

typedef struct Stack{
    Node * head;
    void (* push)(Stack, Node);
    void (* pop)(Stack);
    int (* get_length)(Stack);
} Stack;

typedef struct Node{
    int value;
    struct Node * ptr_prev;
    struct Node * ptr_next;
} Node;

void push(Stack * stack, Node * node);
void pop(Stack * stack);
int get_length(Node * head);

#endif