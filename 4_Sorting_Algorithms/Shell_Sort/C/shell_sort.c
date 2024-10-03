#include "shell_sort.h"

/**
 * shell_sort - Sorts an array using the shell sort algorithm.
 *
 * @arr: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */
void shell_sort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}