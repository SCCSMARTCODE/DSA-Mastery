#include "merge_sort.h"

/**
 * merge_sort - Sorts an array using the merge sort algorithm.
 *
 * @arr: Reference to the array to be sorted.
 */
void merge_sort(int *arr, int arr_size, int* sorted_arr){
    if (arr_size <= 1) {
        if (arr_size == 1) {
            sorted_arr[0] = arr[0];
        }
        return; 
    }

    int mid = arr_size / 2;
    int *left = (int *)malloc(sizeof(int)*(mid));
    int *right = (int *)malloc(sizeof(int)*(arr_size-mid));
    


    for (int x = 0;x < mid;x++){
        left[x] = arr[x];
    }
    for (int x = mid;x < arr_size;x++){
        right[x-mid] = arr[x];
    }

    int *sorted_left = (int *)malloc(sizeof(int)*(mid));
    int *sorted_right = (int *)malloc(sizeof(int)*(arr_size-mid));

    merge_sort(left, mid, sorted_left);
    merge_sort(right, arr_size-mid, sorted_right);

    int i = 0, j = 0, x = 0;
    

    while (i < mid && j < (arr_size-mid)) {
        if (sorted_left[i] < sorted_right[j]) {
            sorted_arr[x++] = sorted_left[i++];
        } else {
            sorted_arr[x++] = sorted_right[j++];
        }
    }


    while (i < mid) {
        sorted_arr[x++] = sorted_left[i++];
    }

    while (j < (arr_size-mid)){
        sorted_arr[x++] = sorted_right[j++];
    }

    free(left);
    free(right);
    free(sorted_left);
    free(sorted_right);
}