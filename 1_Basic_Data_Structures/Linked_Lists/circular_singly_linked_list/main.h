#ifndef CSLL_HEADER
#define CSLL_HEADER

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct csll
{
    int number;
    struct csll *ptr;
} csll;


void append(csll **head, int value);
void pop_begin(csll **head);
void pop_end(csll **head);
void pop_index(csll **head, int index);
int len(csll **head);
void rev(csll **head);
void print_list(csll *temp);

#endif