#ifndef SLL_HEADER
#define SLL_HEADER

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct sll
{
    int number;
    struct sll *ptr;
} sll;


void append(sll **head, int value);
void pop_begin(sll **head);
void pop_end(sll **head);
void pop_index(sll **head, int index);
int len(sll **head);
void rev(sll **head);
void print_list(sll *temp);

#endif