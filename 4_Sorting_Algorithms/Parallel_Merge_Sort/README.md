# **Parallel Merge Sort in C++, C, and Python**

## **Introduction**

**Parallel Merge Sort** is an optimized version of the classic Merge Sort algorithm that leverages multiple threads or processes to sort large datasets more efficiently. By dividing the sorting task among multiple threads, Parallel Merge Sort can significantly reduce the time taken for sorting operations, making it ideal for large data sets and high-performance applications.

### **Key Characteristics**:
- **Time Complexity**: O(n log n) in the average and worst cases.
- **Space Complexity**: O(n) for the auxiliary arrays used in merging.
- **Stable**: Yes, it maintains the relative order of equal elements.
- **In-place**: No, it requires additional space for merging.

---

## **Project Overview**

In this project, you will:
1. Implement the **Parallel Merge Sort** algorithm from scratch.
2. Understand how to split tasks across multiple threads and merge results.
3. Test the algorithm on various datasets to ensure its functionality and performance improvements.

---

## **Understanding Parallel Merge Sort**

### **How It Works**:
1. **Divide**: The array is recursively divided into smaller subarrays until each subarray contains a single element.
2. **Conquer**: Each subarray is sorted in parallel using multiple threads.
3. **Merge**: The sorted subarrays are merged back together in a sorted order, using the standard Merge Sort merging technique.

By processing multiple subarrays simultaneously, Parallel Merge Sort can utilize multi-core processors effectively.

---

## **Project Structure**

For this project, you will need:
1. **Parallel Merge Sort Function** (`parallelMergeSort`): The main function implementing the parallel logic.
2. **Helper Functions** (`merge`, `displayArray`): Functions to merge sorted arrays and print arrays.
3. **Main Program**: The driver code to test your Parallel Merge Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION merge(arr, left, mid, right):
    CREATE leftArray AND rightArray
    FOR i FROM left TO mid:
        leftArray[i - left] = arr[i]
    FOR j FROM mid + 1 TO right:
        rightArray[j - mid - 1] = arr[j]

    i = 0, j = 0, k = left
    WHILE i < length(leftArray) AND j < length(rightArray):
        IF leftArray[i] <= rightArray[j]:
            arr[k] = leftArray[i]
            i = i + 1
        ELSE:
            arr[k] = rightArray[j]
            j = j + 1
        k = k + 1

    WHILE i < length(leftArray):
        arr[k] = leftArray[i]
        i = i + 1
        k = k + 1

    WHILE j < length(rightArray):
        arr[k] = rightArray[j]
        j = j + 1
        k = k + 1
END FUNCTION

FUNCTION parallelMergeSort(arr, left, right):
    IF left < right:
        mid = (left + right) / 2

        # Create two threads for left and right halves
        CREATE thread1 FOR parallelMergeSort(arr, left, mid)
        CREATE thread2 FOR parallelMergeSort(arr, mid + 1, right)

        JOIN thread1
        JOIN thread2

        CALL merge(arr, left, mid, right)

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

    CALL parallelMergeSort(arr, 0, length(arr) - 1)

    PRINT "Sorted array: "
    CALL displayArray(arr)
END MAIN FUNCTION
```

---

## **Implementations**

You can implement Parallel Merge Sort in the following languages:
- [C++ Code](./parallelmergesort.cpp)
- [C Code](./parallelmergesort.c)
- [Python Code](./parallelmergesort.py)

Each language will follow the same logic and pseudocode, ensuring consistency across implementations.

---

## **Testing**

### **Test Cases**
Make sure to test your Parallel Merge Sort implementation with different types of arrays:
1. **Random unsorted arrays**: `[38, 27, 43, 3, 9, 82, 10]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5]`
3. **Reverse sorted arrays**: `[5, 4, 3, 2, 1]`
4. **Arrays with duplicates**: `[4, 3, 2, 4, 1, 3, 2]`

### **Expected Output**
For the input array `[38, 27, 43, 3, 9, 82, 10]`, the output after sorting should look like:

```plaintext
Original array: 38 27 43 3 9 82 10 
Sorted array: 3 9 10 27 38 43 82 
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Parallel Merge Sort algorithm**: Learn its recursive structure and how parallel processing improves performance.
2. **Implement a parallel sorting algorithm**: Gain experience in using threads for concurrent processing in sorting tasks.
3. **Test sorting algorithms**: Learn how to validate your Parallel Merge Sort implementation by running it on various test cases and verifying the results.

---

## **Further Improvements**

Once you have implemented Parallel Merge Sort, consider exploring:
1. **Performance benchmarking**: Compare the performance of Parallel Merge Sort with standard Merge Sort on large datasets.
2. **Optimizing thread management**: Investigate better thread management strategies to minimize overhead and improve efficiency.
3. **Handling edge cases**: Enhance your implementation to deal with edge cases like empty arrays or arrays with only one element.

---

## **Resources**
- [GeeksforGeeks - Merge Sort](https://www.geeksforgeeks.org/merge-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Wikipedia - Merge Sort](https://en.wikipedia.org/wiki/Merge_sort)

---

## **Conclusion**

This README provides a detailed guide to implementing **Parallel Merge Sort** in C++, C, and Python. Follow the pseudocode and structure to understand and develop your own implementation of Parallel Merge Sort. This project will help you deepen your knowledge of sorting algorithms that leverage parallelism for enhanced efficiency.

---