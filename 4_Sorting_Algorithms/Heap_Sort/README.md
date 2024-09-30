# **Heap Sort in C++, C, and Python**

## **Introduction**
Heap Sort is an efficient comparison-based sorting algorithm that builds a binary heap from the input data and then extracts the maximum (or minimum) element, placing it in its correct position in the sorted array. With a time complexity of **O(n log n)**, Heap Sort is often used for its efficiency and in-place sorting ability.

In this project, you will learn to implement Heap Sort from scratch in **C++**, **C**, and **Python**. You will also test the algorithm on various datasets to ensure correctness and efficiency.

---

## **Project Overview**

This project includes:
1. Implementing the **Heap Sort** algorithm.
2. Writing a function to verify if an array is sorted.
3. Testing the implementation on various datasets.

The primary goal is to help you understand Heap Sort and gain hands-on experience with this efficient sorting algorithm.

---

## **Understanding Heap Sort**

Heap Sort involves two main steps:
1. **Heap Construction**: Build a max heap (or min heap) from the unsorted array.
2. **Sorting**: Repeatedly extract the root of the heap (the maximum or minimum element) and reduce the size of the heap, adjusting the remaining elements to maintain the heap structure.

Heap Sort uses a **binary heap** (often implemented as an array) to achieve this. It is an **in-place** sorting algorithm with a time complexity of **O(n log n)** in both average and worst-case scenarios.

---

## **Project Structure**

This project consists of:
- **Heapify Function** (`heapify`): Adjusts a binary tree (array) to maintain the heap property.
- **Heap Sort Function** (`heapSort`): Sorts the array using Heap Sort.
- **Validation Function** (`isSorted`): Verifies if the array is sorted.
- **Display Function** (`displayArray`): Prints the array before and after sorting.
- **Main Program**: Drives the program, calling the necessary functions.

---

## **Main Components**

### **Pseudocode for the Project**

The pseudocode serves as a guide for implementing the solution in any language (C++, C, or Python):

```plaintext
FUNCTION heapify(arr, n, i):
    SET largest = i
    SET left = 2 * i + 1
    SET right = 2 * i + 2

    IF left < n AND arr[left] > arr[largest]:
        SET largest = left
    IF right < n AND arr[right] > arr[largest]:
        SET largest = right
    IF largest != i:
        SWAP arr[i] WITH arr[largest]
        CALL heapify(arr, n, largest)
END FUNCTION

FUNCTION heapSort(arr):
    n = length(arr)

    FOR i FROM n // 2 - 1 DOWN TO 0:
        CALL heapify(arr, n, i)

    FOR i FROM n - 1 DOWN TO 0:
        SWAP arr[0] WITH arr[i]
        CALL heapify(arr, i, 0)
END FUNCTION

FUNCTION isSorted(arr):
    FOR i FROM 1 TO length(arr):
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
    DECLARE arr AS [64, 34, 25, 12, 22, 11, 90]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL heapSort(arr)

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

The solution is implemented in the following languages:

- [C++ Code](./heap_sort.cpp)
- [C Code](./heap_sort.c)
- [Python Code](./heap_sort.py)

Make sure the logic in the pseudocode is reflected in each implementation.

---

## **Testing**

You can validate your Heap Sort implementation by testing it on different arrays, such as:
1. **Random unsorted arrays**: `[15, 19, 8, 2, 17]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5]`
3. **Reverse sorted arrays**: `[20, 15, 10, 5, 1]`
4. **Arrays with negative numbers**: `[-8, -3, -1, -9, 0]`
5. **Arrays with duplicates**: `[7, 3, 7, 1, 5, 7]`

### **Example Output**
After running the program, you should expect the following output:

```plaintext
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By completing this project, you will:
1. Understand the **Heap Sort** algorithm and its mechanics.
2. Be able to **implement** Heap Sort in **C++**, **C**, and **Python**.
3. Learn to **validate** sorting algorithms using test cases.
4. Gain practical experience in working with **heaps** and **binary trees** in sorting.

---

## **Further Improvements**

To take this project further, consider the following:
1. Measure the **time complexity** on different datasets and compare Heap Sort to other algorithms like Quick Sort and Merge Sort.
2. Implement **min-heap** sorting.
3. Analyze the memory footprint and optimize the algorithm for space efficiency.

---

## **Resources**
- [GeeksforGeeks - Heap Sort](https://www.geeksforgeeks.org/heap-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This project is an excellent exercise for understanding more complex sorting algorithms like Heap Sort. With the provided pseudocode and explanations, you can easily implement the solution in multiple programming languages. 
