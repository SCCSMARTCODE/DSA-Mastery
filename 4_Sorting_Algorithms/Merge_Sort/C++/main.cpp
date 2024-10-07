#include "merge_sort.hpp"

/**
 * main - This is my main function
 * 
 * Return: 1
 */
int main(void){
    std::vector<int> arr {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array:";
    display_array(arr);

    arr = merge_sort(arr);

    std::cout << "Sorted array:";
    display_array(arr);
    is_sorted(arr) ? std::cout << "The array is sorted correctly.": std::cout << "The array is not sorted correctly.";
    std::cout << std::endl;

    return 0;
}