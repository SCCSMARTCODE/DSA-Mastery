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
void print_list(sll *temp);

#endif