#include "quick_sort.h"

/**
 * quick_sort - Sorts an array using the quick sort algorithm.
 *
 * @arr: Array to be sorted.
 * @arr_size: Size of the array.
 * @sorted_arr: Pointer to the array where sorted elements will be stored.
 * @returns: Void
 */
void quick_sort(int* arr, int arr_size, int* sorted_arr) {
    if (arr_size < 2){
        for (int i = 0; i < arr_size; ++i) {
            sorted_arr[i] = arr[i]; // Copy the original array
        }
        return;
    }

    int pivot = arr[arr_size - 1];
    int left_len = 0;

    for(int x = 0; x < arr_size - 1; ++x){
        if (arr[x] <= pivot){
            left_len++;
        }
    }
    int right_len = arr_size - left_len - 1;

    int *left = (int*)malloc(sizeof(int) * left_len);
    int *right = (int*)malloc(sizeof(int) * right_len);

    if (!left || !right) {
        free(left);
        free(right);
        return;
    }

    int left_idx = 0, right_idx = 0;

    for (int i = 0; i < arr_size - 1; ++i) {
        if (arr[i] <= pivot) {
            left[left_idx++] = arr[i];
        } else{
            right[right_idx++] = arr[i];
        }
}


    quick_sort(left, left_len, sorted_arr);
    sorted_arr[left_len] = pivot;
    quick_sort(right, right_len, sorted_arr + left_len + 1);

    free(left);
    free(right);

}