"""
This is the merge sort library
"""
from typing import List


def quick_sort(arr: List[int]) -> List[int]:
    if len(arr) < 2:
        return arr

    pivot = arr[-1]
    left = []
    right = []

    for i in range(len(arr) - 1):
        if arr[i] < pivot:
            left.append(arr[i])
        else:
            right.append(arr[i])

    return quick_sort(left) + [pivot] + quick_sort(right)
