#include "insertion_sort.hpp"

/**
 * insertion_sort - Sorts an array using the insertion sort algorithm.
 *
 * @arr: Reference to the array to be sorted.
 */
void insertion_sort(std::vector<int> &arr) {
    int len_vector = static_cast<int>(arr.size());

    for (int i = 1; i < len_vector; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}