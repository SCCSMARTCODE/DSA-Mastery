#include "bubble_sort.hpp"

void display_array(std::vector<int> &arr){

    for (int idx: arr){
        std::cout << " " << idx;
    }
    std::cout << std::endl;
}

bool is_sorted(std::vector<int> &arr){
    if (arr.empty()){
        return true;
    }

    int prev {arr[0]};

    for (size_t idx {1}; idx < arr.size(); idx++){
        if (prev > arr[idx]){
            return false;
        }
        prev = arr[idx];
    }
    return true;
}


void bubble_sort(std::vector<int> &arr) {
    int len_unsorted = static_cast<int>(arr.size());
    
    if (len_unsorted < 2) {
        return;
    }

    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (size_t idx = 0; idx < len_unsorted - 1; idx++) {
            if (arr[idx] > arr[idx + 1]) {
                std::swap(arr[idx], arr[idx + 1]);
                sorted = false;
            }
        }
        len_unsorted--;
    }
}