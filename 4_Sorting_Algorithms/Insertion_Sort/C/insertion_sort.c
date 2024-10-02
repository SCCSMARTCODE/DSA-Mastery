#include "insertion_sort.h"

/**
 * selection_sort - Sorts an array using the insertion sort algorithm.
 *
 * @arr: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */
void insertion_sort(int arr[], int size){
    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}