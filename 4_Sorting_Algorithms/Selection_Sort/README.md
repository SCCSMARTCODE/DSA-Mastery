# **Selection Sort in C++, C, and Python**

## **Introduction**
**Selection Sort** is a simple, comparison-based sorting algorithm. It divides the array into a sorted and an unsorted region, repeatedly selecting the smallest element from the unsorted portion and moving it to the sorted portion. It is easy to implement but has a time complexity of **O(n²)**, making it inefficient for large datasets.

In this project, you will implement **Selection Sort** from scratch in **C++**, **C**, and **Python** and test it on various cases to validate the correctness of the sorting.

---

## **Project Overview**

In this project, you will:
1. Implement the **Selection Sort** algorithm.
2. Create a helper function to check if the array is sorted.
3. Test the algorithm on different datasets to ensure its accuracy.

---

## **Understanding Selection Sort**

Selection Sort works by:
1. Finding the minimum element in the unsorted portion of the array.
2. Swapping it with the first element of the unsorted portion.
3. Repeating the process for the rest of the array until the entire array is sorted.

### **Key Characteristics**:
- **Time Complexity**:
  - Worst and Average Case: **O(n²)**
  - Best Case: **O(n²)** (even if the array is already sorted)
- **Space Complexity**: **O(1)**, since it’s an in-place sorting algorithm.
- **In-place**: Yes, it doesn’t require extra space to sort the array.
- **Stable**: No, it may change the relative order of equal elements.

---

## **Project Structure**

This project will consist of the following:
- **Selection Sort Function** (`selectionSort`): Implements the sorting algorithm.
- **Helper Functions** (`isSorted` and `displayArray`): To check if the array is sorted and display the array before and after sorting.
- **Main Program**: Drives the sorting, validation, and display logic.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION selectionSort(arr):
    FOR i FROM 0 TO length(arr) - 1:
        SET minIndex = i
        FOR j FROM i + 1 TO length(arr):
            IF arr[j] < arr[minIndex]:
                SET minIndex = j
        SWAP arr[i] WITH arr[minIndex]
    END FOR
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
    DECLARE arr AS [64, 25, 12, 22, 11]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL selectionSort(arr)

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

The implementation of Selection Sort can be done in:
- [C++ Code](./selection_sort.cpp)
- [C Code](./selection_sort.c)
- [Python Code](./selection_sort.py)

You will follow the pseudocode provided to implement the algorithm in each language. Each function should behave similarly in each language, ensuring consistency.

---

## **Testing**

You should test your Selection Sort implementation on various types of datasets:
1. **Random unsorted arrays**: `[64, 25, 12, 22, 11]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5, 6, 7]`
3. **Reverse sorted arrays**: `[10, 9, 8, 7, 6, 5, 4]`
4. **Arrays with negative numbers**: `[-3, -7, 0, 2, 5]`
5. **Arrays with duplicates**: `[3, 1, 4, 3, 2, 5]`

### **Example Output**
After running the program, the output might look something like:

```plaintext
Original array: 64 25 12 22 11 
Sorted array: 11 12 22 25 64 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. Understand the **Selection Sort** algorithm and its characteristics.
2. Gain hands-on experience implementing sorting algorithms from scratch.
3. Learn how to validate sorting algorithms by writing helper functions and testing with different datasets.
4. Be able to distinguish between Selection Sort and other algorithms like Bubble Sort and Quick Sort.

---

## **Further Improvements**

After successfully implementing Selection Sort, consider making these improvements:
1. **Optimize swaps**: Try to reduce the number of swaps by checking if swapping is necessary.
2. **Performance comparison**: Compare the performance of Selection Sort with more efficient algorithms like Quick Sort or Merge Sort.
3. **Visualize the sorting process**: Create a graphical representation of the sorting process to better understand how Selection Sort operates.

---

## **Resources**
- [GeeksforGeeks - Selection Sort](https://www.geeksforgeeks.org/selection-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This project will help you understand the basics of the **Selection Sort** algorithm and how to implement it in different programming languages. By testing and validating your implementation with various datasets, you’ll gain a deeper understanding of sorting algorithms and their efficiency.