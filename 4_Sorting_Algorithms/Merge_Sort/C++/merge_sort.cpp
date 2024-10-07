#include "merge_sort.hpp"

/**
 * merge_sort - Sorts an array using the merge sort algorithm.
 *
 * @arr: Reference to the array to be sorted.
 */
std::vector<int> merge_sort(std::vector<int> &arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());

    left = merge_sort(left);
    right = merge_sort(right);

    std::vector<int> sorted_arr;
    unsigned long long i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            sorted_arr.push_back(left[i]);
            i++;
        } else {
            sorted_arr.push_back(right[j]);
            j++;
        }
    }

    while (i < left.size()) {
        sorted_arr.push_back(left[i]);
        i++;
    }

    while (j < right.size()) {
        sorted_arr.push_back(right[j]);
        j++;
    }

    return sorted_arr;
}