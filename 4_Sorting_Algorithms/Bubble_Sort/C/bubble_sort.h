#ifndef BUBBLE_HEADER
#define BUBBLE_HEADER
    
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void display_array(int *arr, int arr_len);
void bubble_sort(int *arr, int arr_len);
bool is_sorted(int *arr, int arr_len);

#endif