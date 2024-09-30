from typing import List


def selection_sort(arr: List[int]) -> List[int]:
    """
    Sorts an array using the selection sort algorithm.

    :param arr: List of integers to be sorted.
    :return: The sorted list.
    """
    arr_len = len(arr)
    
    for i in range(arr_len):
        smallest_idx = i
        for j in range(i + 1, arr_len):
            if arr[j] < arr[smallest_idx]:
                smallest_idx = j
        
        if i != smallest_idx:
            arr[i], arr[smallest_idx] = arr[smallest_idx], arr[i]
    
    return arr
