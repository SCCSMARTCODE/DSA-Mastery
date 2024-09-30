# **Quick Sort in C++, C, and Python**

## **Introduction**
**Quick Sort** is an efficient, in-place, and comparison-based sorting algorithm that uses the **divide-and-conquer** approach. It is faster than simple algorithms like Bubble Sort or Insertion Sort, especially for large datasets, with an average time complexity of **O(n log n)**. However, in the worst case (when the pivot is always the smallest or largest element), Quick Sort has a time complexity of **O(n²)**.

In this project, you will implement **Quick Sort** from scratch in **C++**, **C**, and **Python** and test it on various cases to validate the sort.

---

## **Project Overview**

In this project, you will:
1. Implement the **Quick Sort** algorithm.
2. Write a helper function to partition the array around a pivot.
3. Test the algorithm with different datasets.
4. Validate the sorting with various test cases.

---

## **Understanding Quick Sort**

Quick Sort follows these steps:
1. **Partition**: Select a "pivot" element and partition the array so that elements smaller than the pivot come before it and elements larger than the pivot come after it.
2. **Recursively sort**: Apply Quick Sort to the sub-arrays on either side of the pivot.

### **Key Characteristics**:
- **Time Complexity**:
  - Average: **O(n log n)**.
  - Worst Case: **O(n²)** (if the pivot is always the smallest or largest element).
- **Space Complexity**: **O(log n)** for the recursive stack space.
- **In-place**: It doesn't require additional memory for sorting, unlike Merge Sort.
- **Unstable**: It may change the relative order of equal elements.

---

## **Project Structure**

This project includes:
- **Quick Sort Function** (`quickSort`): Recursively partitions and sorts the array.
- **Partition Function** (`partition`): Helps in partitioning the array around the pivot.
- **Helper Functions** (`isSorted` and `displayArray`): To validate and display the array.
- **Main Program**: Drives the sorting, validation, and display logic.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION quickSort(arr, low, high):
    IF low < high:
        SET pivot_index = partition(arr, low, high)
        CALL quickSort(arr, low, pivot_index - 1)
        CALL quickSort(arr, pivot_index + 1, high)
    END IF
END FUNCTION

FUNCTION partition(arr, low, high):
    SET pivot = arr[high]
    SET i = low - 1
    FOR j FROM low TO high - 1:
        IF arr[j] < pivot:
            INCREMENT i
            SWAP arr[i] WITH arr[j]
    SWAP arr[i + 1] WITH arr[high]
    RETURN i + 1
END FUNCTION

FUNCTION isSorted(arr):
    FOR i FROM 1 TO length(arr) - 1:
        IF arr[i - 1] > arr[i]:
            RETURN False
    RETURN True
END FUNCTION

FUNCTION displayArray(arr):
    FOR EACH element IN arr:
        PRINT element
    END FOR
END FUNCTION

MAIN FUNCTION:
    DECLARE arr AS [29, 10, 14, 37, 13]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL quickSort(arr, 0, length(arr) - 1)

    PRINT "Sorted array: "
    CALL displayArray(arr)

    IF isSorted(arr) IS True:
        PRINT "The array is sorted correctly."
    ELSE:
        PRINT "The array is not sorted correctly."
END MAIN FUNCTION
```

---

## **Implementations**

You will implement the following files:

- [C++ Code](./quick_sort.cpp)
- [C Code](./quick_sort.c)
- [Python Code](./quick_sort.py)

Use the pseudocode to implement the algorithm in each language. Ensure that the partitioning process is correct and that the recursive Quick Sort operates on the left and right sub-arrays.

---

## **Testing**

You should test your Quick Sort implementation on various types of datasets:
1. **Random unsorted arrays**: `[29, 10, 14, 37, 13]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5, 6, 7]`
3. **Reverse sorted arrays**: `[10, 9, 8, 7, 6, 5, 4]`
4. **Arrays with negative numbers**: `[-7, -3, 0, 2, 9, -10]`
5. **Arrays with duplicates**: `[5, 3, 8, 3, 2, 5, 1]`

### **Example Output**
After running the program, you should see output similar to:

```plaintext
Original array: 29 10 14 37 13 
Sorted array: 10 13 14 29 37 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By completing this project, you will:
1. Understand how **Quick Sort** works and the concept of **partitioning**.
2. Implement an efficient **Divide and Conquer** algorithm.
3. Validate your Quick Sort implementation using a variety of datasets.
4. Improve problem-solving skills with recursive functions.

---

## **Further Improvements**

Once you have successfully implemented Quick Sort, consider exploring the following:
1. **Optimized pivot selection**: Instead of always using the last element as the pivot, use strategies like **median-of-three**.
2. **Iterative Quick Sort**: Convert the recursive approach to an iterative one.
3. **Performance comparison**: Compare the performance of Quick Sort with Merge Sort or Heap Sort.

---

## **Resources**
- [GeeksforGeeks - Quick Sort](https://www.geeksforgeeks.org/quick-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This project is designed to teach you the Quick Sort algorithm by implementing it from scratch in **C++**, **C**, and **Python**. You’ll also learn how to test and validate your algorithm on different datasets, giving you a strong foundation in sorting algorithms.
