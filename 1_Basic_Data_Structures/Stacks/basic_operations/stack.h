#ifndef STACK_LL
#define STACK_LL

typedef struct stack_node
{
    int val;
    struct stack_node *ptr;
} stack_node;


#include <stdio.h>
#include <stdlib.h>


void push(stack_node **top, int value);
void pop(stack_node **top);
void display(stack_node *top);
void peek(stack_node *top);
void clear(stack_node **top);

#endif