# **Counting Sort in C++, C, and Python**

## **Introduction**

**Counting Sort** is a non-comparative integer sorting algorithm that sorts the elements of an array by counting the occurrences of each unique element in the array. The count of each element determines its position in the sorted array. This algorithm works best when the range of input values is known and relatively small. It’s efficient with **O(n + k)** time complexity, where **n** is the number of elements, and **k** is the range of the input.

Unlike comparison-based algorithms (such as **Quick Sort** or **Merge Sort**), **Counting Sort** makes use of an auxiliary array (or list) to track the frequency of each unique element. It is ideal for sorting numbers or objects with a key that has a small integer range.

---

## **Project Overview**

In this project, you will:
1. Implement the **Counting Sort** algorithm from scratch in **C++**, **C**, and **Python**.
2. Create helper functions to check if the array is sorted correctly.
3. Test your solution on various datasets to ensure the sorting algorithm works as expected.

---

## **Understanding Counting Sort**

**Counting Sort** works by:
1. Finding the maximum and minimum values in the array.
2. Creating a count array of size equal to the range of the input data.
3. Counting the occurrences of each unique element in the input array.
4. Modifying the count array so that each element at each index stores the sum of previous counts.
5. Using this count array to place each element from the input array into its correct position in the output array.

### **Key Characteristics**:
- **Time Complexity**: **O(n + k)**, where **n** is the number of elements and **k** is the range of the input values.
- **Space Complexity**: **O(n + k)** (due to the count array).
- **Stable**: Yes, it maintains the relative order of equal elements.
- **Not In-place**: It requires an auxiliary array for counting and storing results.

---

## **Project Structure**

In this project, you will implement:
1. **Counting Sort Function** (`countingSort`): The core sorting algorithm.
2. **Helper Functions** (`isSorted` and `displayArray`): To check if the array is sorted correctly and to display the array.
3. **Main Program**: The driver code to test your **Counting Sort** implementation on different datasets.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION countingSort(arr):
    SET max_val = FIND maximum value in arr
    SET min_val = FIND minimum value in arr
    SET range = max_val - min_val + 1
    
    CREATE count array of size range, initialized to 0
    CREATE output array of same size as arr
    
    FOR i FROM 0 TO length(arr) - 1:
        INCREMENT count[arr[i] - min_val] BY 1
    
    MODIFY count array such that each element at each index
    stores the sum of the previous counts (i.e., cumulative counts)
    
    FOR i FROM length(arr) - 1 TO 0:
        output[count[arr[i] - min_val] - 1] = arr[i]
        DECREMENT count[arr[i] - min_val] BY 1

    COPY output array to arr

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
    DECLARE arr AS [64, 34, 25, 12, 22, 11, 90]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL countingSort(arr)

    PRINT "Sorted array: "
    CALL displayArray(arr)

    IF isSorted(arr) IS True:
        PRINT "The array is sorted correctly."
    ELSE:
        PRINT "The array is not sorted correctly."
    END IF
END MAIN FUNCTION
```

---

## **Implementations**

This project can be implemented in the following programming languages:
- [C++ Code](./counting_sort.cpp)
- [C Code](./counting_sort.c)
- [Python Code](./counting_sort.py)

Each implementation will follow the pseudocode structure provided, ensuring the same logic is applied across all languages.

---

## **Testing**

Test your **Counting Sort** implementation on different kinds of datasets:
1. **Random unsorted arrays**: `[64, 34, 25, 12, 22, 11, 90]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5, 6, 7]`
3. **Reverse sorted arrays**: `[10, 9, 8, 7, 6, 5, 4]`
4. **Arrays with negative numbers**: `[-5, -3, 0, 2, 8, -1]`
5. **Arrays with duplicates**: `[3, 1, 4, 3, 2, 5]`

### **Expected Output**
For the input array `[64, 34, 25, 12, 22, 11, 90]`, after sorting, the output should look like this:

```plaintext
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By completing this project, you will:
1. Understand the working of **Counting Sort** and how it differs from comparison-based sorting algorithms.
2. Learn how to implement a non-comparative sorting algorithm in different programming languages.
3. Gain insights into handling sorting of integers efficiently with known ranges.
4. Develop problem-solving skills by writing the algorithm from scratch.

---

## **Further Improvements**

Once you complete the basic implementation of **Counting Sort**, consider enhancing your project by:
1. Implementing **Counting Sort** for arrays with non-integer elements.
2. Modifying the algorithm to work with objects that have integer keys.
3. Testing your implementation with larger datasets and measuring the time performance.

---

## **Resources**
- [GeeksforGeeks - Counting Sort](https://www.geeksforgeeks.org/counting-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This README introduces the **Counting Sort** algorithm and guides you through its implementation in **C++**, **C**, and **Python**. The steps outlined will help you understand how the algorithm works and ensure you can implement and test it effectively in various scenarios.