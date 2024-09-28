#include "bubble_sort.h"

void display_array(int *arr, int arr_len){

    for (int i = 0; i < arr_len; i++){
        printf(" %d", arr[i]);
    }
    putchar('\n');
}

bool is_sorted(int *arr, int arr_len){
    if (arr_len == 0){
        return true;
    }

    int prev  = arr[0];
    
    for (int i = 1; i < arr_len; i++){
        if (prev > arr[i]){
            return false;
        }
        prev = arr[i];
    }
    return 1;
}


void bubble_sort(int *arr, int arr_len) {
    size_t len_unsorted = arr_len;
    
    if (len_unsorted < 2) {
        return;
    }

    int sorted = false;
    int temp;
    while (!sorted) {
        sorted = true;
        for (size_t idx = 0; idx < len_unsorted - 1; idx++) {
            if (arr[idx] > arr[idx + 1]) {

                temp = arr[idx];
                arr[idx] = arr[idx + 1];
                arr[idx + 1] = temp;
                sorted = false;
            }
        }
        len_unsorted--;
    }
}