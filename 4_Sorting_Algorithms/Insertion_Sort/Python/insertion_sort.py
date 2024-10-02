from typing import List


def insertion_sort(arr: List[int]):
    """
    Sorts an array using the insertion sort algorithm.

    :param arr: List of integers to be sorted.
    """
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        
        arr[j + 1] = key
