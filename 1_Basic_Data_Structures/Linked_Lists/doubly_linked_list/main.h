#ifndef SLL_HEADER
#define SLL_HEADER

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct dll
{
    int number;
    struct dll *prev;
    struct dll *next;
} dll;


void append(dll **head, int value);
void pop_begin(dll **head);
void pop_end(dll **head);
void pop_index(dll **head, int index);
int len(dll **head);
void rev(dll **head);
void print_list(dll *temp);

#endif