# **Merge Sort in C++, C, and Python**

## **Introduction**
Merge Sort is an efficient, stable, and divide-and-conquer sorting algorithm. It divides the unsorted list into smaller sub-lists, sorts those sub-lists recursively, and then merges them back together to form a sorted list. With a time complexity of **O(n log n)**, Merge Sort is much faster than basic sorting algorithms like Bubble Sort or Insertion Sort, especially for larger datasets.

This project demonstrates how to implement **Merge Sort** in **C++**, **C**, and **Python**, test it on various cases, and validate the correctness of the sort.

---

## **Project Overview**

In this project, you will:
1. Implement the **Merge Sort** algorithm.
2. Write a helper function to merge sorted sub-lists.
3. Test the algorithm with different datasets.
4. Validate the sorting with various test cases.

---

## **Understanding Merge Sort**

Merge Sort follows these steps:
1. **Divide**: Split the array into two halves.
2. **Conquer**: Recursively sort each half.
3. **Combine**: Merge the two sorted halves into a single sorted list.

### **Key Characteristics**:
- **Time Complexity**: O(n log n) in the best, average, and worst cases.
- **Space Complexity**: O(n) because of the temporary arrays used in the merge process.
- **Stable**: It preserves the relative order of equal elements.

---

## **Project Structure**

This project includes:
- **Merge Sort Function** (`mergeSort`): The recursive function to divide and sort.
- **Merge Function** (`merge`): Merges two sorted arrays into one.
- **Helper Functions** (`isSorted` and `displayArray`): To validate and display the array.
- **Main Program**: Drives the execution of sorting, validation, and display.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION mergeSort(arr, left, right):
    IF left >= right:
        RETURN
    SET middle = (left + right) / 2
    CALL mergeSort(arr, left, middle)
    CALL mergeSort(arr, middle + 1, right)
    CALL merge(arr, left, middle, right)
END FUNCTION

FUNCTION merge(arr, left, middle, right):
    CREATE temp arrays L and R for left and right sub-arrays
    COPY data into L and R from arr
    MERGE the sub-arrays L and R back into arr in sorted order
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
    DECLARE arr AS [38, 27, 43, 3, 9, 82, 10]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL mergeSort(arr, 0, length(arr) - 1)

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

- [C++ Code](./merge_sort.cpp)
- [C Code](./merge_sort.c)
- [Python Code](./merge_sort.py)

Follow the pseudocode to implement the algorithm in each language. Make sure to break the array into smaller sub-arrays, sort them, and merge them properly.

---

## **Testing**

You should test your Merge Sort implementation with a variety of datasets:
1. **Random unsorted arrays**: `[38, 27, 43, 3, 9, 82, 10]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5, 6, 7]`
3. **Reverse sorted arrays**: `[10, 9, 8, 7, 6, 5, 4]`
4. **Arrays with negative numbers**: `[-5, -1, 0, 3, 7, -3]`
5. **Arrays with duplicates**: `[5, 3, 8, 3, 2, 5, 1]`

### **Example Output**
After running the program, you should see:

```plaintext
Original array: 38 27 43 3 9 82 10
Sorted array: 3 9 10 27 38 43 82
The array is sorted correctly.
```

---

## **Learning Outcomes**

By completing this project, you will:
1. Understand the **Merge Sort** algorithm and how it works.
2. Gain experience implementing a **Divide and Conquer** algorithm.
3. Validate your implementation using various test cases and datasets.
4. Learn how to handle recursion and merging logic effectively.

---

## **Further Improvements**

After successfully implementing Merge Sort, you can:
1. Measure the **time complexity** by sorting larger datasets and comparing it with algorithms like Quick Sort or Heap Sort.
2. Optimize the merging process to reduce memory usage.
3. Experiment with parallelizing Merge Sort for better performance on multi-core systems.

---

## **Resources**
- [GeeksforGeeks - Merge Sort](https://www.geeksforgeeks.org/merge-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This project is designed to teach you how to implement and understand the **Merge Sort** algorithm. By coding the solution in multiple programming languages and running tests on various datasets, you will develop a strong foundation in sorting algorithms and recursive thinking.
