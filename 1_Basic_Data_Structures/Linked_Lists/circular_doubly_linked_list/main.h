#ifndef CDLL_HEADER
#define CDLL_HEADER

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct cdll
{
    int number;
    struct cdll *prev;
    struct cdll *next;
} cdll;


void append(cdll **head, int value);
void pop_begin(cdll **head);
void pop_end(cdll **head);
void pop_index(cdll **head, int index);
int len(cdll **head);
void rev(cdll **head);
void print_list(cdll *temp);

#endif