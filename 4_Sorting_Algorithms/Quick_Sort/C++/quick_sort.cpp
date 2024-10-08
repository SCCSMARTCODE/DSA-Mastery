#include "quick_sort.hpp"

/**
 * quick_sort - Sorts an array using the quick sort algorithm.
 *
 * @arr: Reference to the array to be sorted.
 */
std::vector<int> quick_sort(std::vector<int> arr) {
    if (arr.size() < 2){
        return arr;
    }

    int pivot {arr.back()};
    std::vector<int> left {};
    std::vector<int> right {};

    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] < pivot) {
            left.push_back(arr[i]);
        } else {
            right.push_back(arr[i]);
        }
    }

    std::vector<int> solution = quick_sort(left);
    solution.push_back(pivot);
    std::vector<int> right_sorted = quick_sort(right);
    solution.insert(solution.end(), right_sorted.begin(), right_sorted.end());

    return solution;
}