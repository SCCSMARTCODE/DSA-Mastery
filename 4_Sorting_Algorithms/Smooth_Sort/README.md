# **Smooth Sort in C++, C, and Python**

## **Introduction**

**Smooth Sort** is a comparison-based sorting algorithm that is a variant of **Heap Sort**. It was introduced by Edsger W. Dijkstra and is designed to be efficient on already partially sorted datasets. Smooth Sort leverages the structure of a **Leonardo Heap**, a special type of heap structure, to efficiently sort elements with a worst-case time complexity of O(n log n). However, in the best-case scenario (nearly sorted arrays), it can approach O(n) time complexity, making it ideal for sorting arrays that are almost sorted.

### **Key Characteristics**:
- **Time Complexity**: O(n log n) in the worst case, and O(n) for nearly sorted arrays.
- **Space Complexity**: O(log n).
- **In-place**: Yes.
- **Not Stable**: Smooth Sort does not preserve the relative order of equal elements.

---

## **Project Overview**

In this project, you will:
1. Implement the **Smooth Sort** algorithm.
2. Learn how to construct and manage **Leonardo Heaps**.
3. Test your **Smooth Sort** implementation across various datasets and measure its efficiency on already sorted or nearly sorted arrays.

---

## **Understanding Smooth Sort**

### **How It Works**:
1. **Leonardo Numbers**: The core of Smooth Sort relies on **Leonardo Numbers** (a sequence similar to the Fibonacci sequence). These numbers define the sizes of the heaps used in the algorithm.
2. **Heap Construction**: The algorithm builds a heap structure (Leonardo heaps) over the unsorted array.
3. **Sifting and Merging**: During sorting, the algorithm merges and sifts these heaps, placing the largest elements in their correct positions at the end of the array.
4. **Final Phase**: Once the heaps are properly sorted, the algorithm iteratively reduces the size of the heap, finalizing the sorted array.

---

## **Project Structure**

For this project, you will implement:
1. **Smooth Sort Function** (`smoothSort`): The main function that performs the sorting using Leonardo heaps.
2. **Helper Functions** (`heapify`, `sift`, `restoreHeap`, `leonardoNumber`):
   - Functions to manage the creation and merging of Leonardo heaps.
   - Functions to sift and restore heap properties during sorting.
3. **Main Program**: The driver code that tests the Smooth Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION sift(arr, root, size):
    WHILE root has children:
        largest = root
        leftChild = 2 * root + 1
        rightChild = 2 * root + 2

        IF leftChild < size AND arr[leftChild] > arr[largest]:
            largest = leftChild
        IF rightChild < size AND arr[rightChild] > arr[largest]:
            largest = rightChild

        IF largest == root:
            BREAK
        ELSE:
            SWAP arr[root] WITH arr[largest]
            root = largest
END FUNCTION

FUNCTION smoothSort(arr):
    size = length(arr)
    leonardoHeapSizes = []

    FOR each element in arr:
        ADD element to the leonardoHeapSizes
        WHILE there are elements to be sifted:
            CALL sift(arr, element, size)
            IF heap needs to be merged:
                MERGE the heaps
            IF size is reduced:
                BREAK
    END FOR
END FUNCTION

FUNCTION displayArray(arr):
    FOR EACH element IN arr:
        PRINT element
    END FOR
END FUNCTION

MAIN FUNCTION:
    DECLARE arr AS [21, 10, 45, 33, 17, 11, 5, 12, 20, 7]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL smoothSort(arr)

    PRINT "Sorted array: "
    CALL displayArray(arr)
END MAIN FUNCTION
```

---

## **Implementations**

You can implement Smooth Sort in the following languages:
- [C++ Code](./smoothsort.cpp)
- [C Code](./smoothsort.c)
- [Python Code](./smoothsort.py)

Each implementation will follow the same logic, ensuring that the algorithm is efficient in any language.

---

## **Testing**

Test your **Smooth Sort** implementation on various datasets, including:
1. **Random unsorted arrays**: `[21, 10, 45, 33, 17, 11, 5, 12, 20, 7]`
2. **Already sorted arrays**: `[5, 7, 10, 11, 12, 17, 20, 21, 33, 45]`
3. **Reverse sorted arrays**: `[45, 33, 21, 20, 17, 12, 11, 10, 7, 5]`
4. **Arrays with duplicates**: `[12, 5, 12, 7, 7, 21, 20, 5, 10, 11]`

### **Expected Output**
For the input array `[21, 10, 45, 33, 17, 11, 5, 12, 20, 7]`, after sorting, the output should look like this:

```plaintext
Original array: 21 10 45 33 17 11 5 12 20 7 
Sorted array: 5 7 10 11 12 17 20 21 33 45 
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Smooth Sort algorithm**: Learn how it works and the benefits of using it on nearly sorted arrays.
2. **Experience with Leonardo Heaps**: Gain hands-on experience building and managing Leonardo heaps, a critical part of the Smooth Sort algorithm.
3. **Improve problem-solving skills**: Implementing and testing this advanced sorting algorithm will enhance your ability to solve complex problems.
4. **Test and validate**: You will learn how to test and optimize your sorting algorithm with various datasets.

---

## **Further Improvements**

Once you have successfully implemented **Smooth Sort**, consider improving the project by:
1. **Analyzing the algorithm’s performance** on larger datasets and comparing it to other sorting algorithms.
2. **Optimizing the heap management** to further improve performance on nearly sorted datasets.
3. **Comparing Smooth Sort** with other hybrid algorithms like **IntroSort** or **Timsort**.

---

## **Resources**
- [Smooth Sort on Wikipedia](https://en.wikipedia.org/wiki/Smoothsort)
- [GeeksforGeeks - Smooth Sort](https://www.geeksforgeeks.org/smooth-sort/)
- [Introduction to Smooth Sort by Dijkstra](https://www.cs.utexas.edu/users/EWD/transcriptions/EWD07xx/EWD796.html)

---

## **Conclusion**

This README provides a comprehensive guide for implementing **Smooth Sort** in **C++**, **C**, and **Python**. Follow the pseudocode and project structure to understand and implement this advanced sorting algorithm from scratch in your preferred programming language.
