"""
This is the bubble sort library
"""
from typing import List


def bubble_sort(arr: List[int]) -> None:
    sorted_ = False
    while not sorted_:
        sorted_ = True
        i = 0
        while i < (len(arr)-1):
            if arr[i] > arr[i+1]:
                sorted_ = False
                arr[i], arr[i+1] = arr[i+1], arr[i]
            i += 1
