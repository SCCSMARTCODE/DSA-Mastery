#include "merge_sort.h"

/**
 * main - This is my main function
 * 
 * Return: 1
 */
int main(void){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int *sorted_arr = (int *)malloc(arr_size * sizeof(int));

    printf("Original array:");
    display_array(arr, arr_size);

    merge_sort(arr , arr_size, sorted_arr);

    printf("Sorted array:");
    display_array(sorted_arr, arr_size);
    is_sorted(sorted_arr, arr_size) ? printf("The array is sorted correctly.\n"): printf("The array is not sorted correctly.\n");

    return 0;
}