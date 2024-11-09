#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <stdlib.h>


// ================ Linked List ================
typedef struct dll
{
    char* name;
    struct dll *prev;
    struct dll *next;
} dll;


void append(dll **head, char* value);
void pop_begin(dll **head);
void pop_end(dll **head);
void pop_index(dll **head, int index);
int len(dll **head);
void rev(dll **head);
void print_list(dll *temp);



// ================Hash===================


int generate_hash(char *str, size_t hash_dim);
void print_hash_table(dll** arr, size_t hash_dim);
void insert(dll** arr, char* str, size_t hash_dim);

#endif