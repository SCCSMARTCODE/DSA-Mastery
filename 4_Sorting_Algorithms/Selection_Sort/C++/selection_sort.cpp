#include "selection_sort.hpp"

/**
 * selection_sort - Sorts an array using the selection sort algorithm.
 *
 * @arr: Reference to the array to be sorted.
 */
void selection_sort(std::vector<int> &arr){
    int len_vector {static_cast<int>(arr.size())};

    for (int i {0}; (i < len_vector - 1); i++){
        int smallest_idx = i;
        for (int j {i + 1}; (j < len_vector); j++){
            if (arr[j] < arr[smallest_idx]){
                smallest_idx = j;
            }
        }
        if (i != smallest_idx){
            std::swap(arr[i], arr[smallest_idx]);
        }
    }
}