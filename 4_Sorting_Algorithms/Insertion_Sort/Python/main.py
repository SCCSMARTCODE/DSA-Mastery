"""
This is my main module
"""
from insertion_sort import insertion_sort


def main():
    arr = [64, 34, 25, 12, 22, 11, 90]
    print("Original array: {}".format(arr))
    insertion_sort(arr)
    print("Sorted array: {}".format(arr))
    print('The array is sorted correctly.') if sorted(arr) == arr else print("The array is not sorted correctly.")


if __name__ == '__main__':
    main()
