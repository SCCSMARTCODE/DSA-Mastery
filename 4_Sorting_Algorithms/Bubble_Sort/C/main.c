#include "bubble_sort.h"

/**
 * main - This is the main Function
 * 
 * Return: 0
 */
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Original array:");
    display_array(arr, arr_size);

    bubble_sort(arr , arr_size);

    printf("Sorted array:");
    display_array(arr, arr_size);
    is_sorted(arr, arr_size) ? printf("The array is sorted correctly.\n"): printf("The array is not sorted correctly.\n");

    return 0;
}