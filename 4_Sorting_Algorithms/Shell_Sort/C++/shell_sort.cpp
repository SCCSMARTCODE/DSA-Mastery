#include "shell_sort.hpp"

/**
 * shell_sort - Sorts an array using the shell sort algorithm.
 *
 * @arr: Reference to the array to be sorted.
 */
void shell_sort(std::vector<int> &arr) {
    int len_vector = static_cast<int>(arr.size());
    int gap = len_vector / 2;
    int temp = 0;
    int j = 0;

    while (gap > 0) {
        for (int i = gap; i < len_vector; i++) {
            temp = arr[i];
            j = i;

            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
        gap /= 2;
    }
}