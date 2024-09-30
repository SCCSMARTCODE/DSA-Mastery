#include "selection_sort.h"

/**
 * selection_sort - Sorts an array using the selection sort algorithm.
 *
 * @arr: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */
void selection_sort(int arr[], int size){
    int temp;

    for (int i = 0; (i < size - 1); i++){
        int smallest_idx = i;
        for (int j = (i + 1); (j < size); j++){
            if (arr[j] < arr[smallest_idx]){
                smallest_idx = j;
            }
        }
        if (i != smallest_idx){
            temp = arr[i];
            arr[i] = arr[smallest_idx];
            arr[smallest_idx] = temp;
        }
    }
}