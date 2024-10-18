#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define MAX_COMMAND_LENGTH 10
#define MAX_ARRAY_SIZE_LENGTH 4
#define MAX_INT_LENGTH 7


void clear_buffer();

// void (*operation_ptr)(int **array);
typedef void (*operations_arr)(long **array, long *array_size_ptr);
// typedef unsigned long long ull;



void create(long **array, long *array_size_ptr);
void insert(long **array, long *array_size_ptr);
void delete(long **array, long *array_size_ptr);
void search(long **array, long *array_size_ptr);
void fill(long **array, long *array_size_ptr);
void print_array(long **array, long *array_size_ptr);
void exit_array(long **array);


#endif