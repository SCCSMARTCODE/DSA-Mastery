# **Cycle Sort in C++, C, and Python**

## **Introduction**

**Cycle Sort** is an in-place, non-comparison sorting algorithm that minimizes the number of writes to the array. It is especially useful when minimizing the number of writes is more important than the time complexity. Cycle Sort works by placing elements in their correct positions by performing cyclic rotations of elements in the array.

### **Key Characteristics**:
- **Time Complexity**: O(n²), where `n` is the number of elements.
- **Space Complexity**: O(1), since it sorts the array in place.
- **Stable**: No, the relative order of equal elements is not preserved.
- **In-place**: Yes, it does not require extra space.

---

## **Project Overview**

In this project, you will:
1. Implement the **Cycle Sort** algorithm from scratch.
2. Understand how the algorithm cycles through the array and places elements in their correct positions.
3. Test the algorithm on various integer arrays to ensure it works properly.

---

## **Understanding Cycle Sort**

### **How It Works**:
1. **Cycle Detection**: Each element is placed in its correct position in the array by counting how many elements are smaller than it. This gives the correct index.
2. **Cycle Rotation**: If the element is not already in its correct position, it is moved to the correct position. The displaced element takes its place, and the cycle continues.
3. **Repeat for All Cycles**: This process is repeated until all elements are in their correct positions.

The main advantage of Cycle Sort is its minimal number of writes, which is proportional to the number of cycles in the input array.

---

## **Project Structure**

For this project, you will need to:
1. **Cycle Sort Function** (`cycleSort`): The main function to implement the Cycle Sort logic.
2. **Helper Functions** (`displayArray`): A function to print the array before and after sorting.
3. **Main Program**: The driver code to test your Cycle Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION cycleSort(arr):
    FOR i FROM 0 TO length(arr) - 2:
        item = arr[i]
        pos = i
        
        # Find the correct position of the element
        FOR j FROM i + 1 TO length(arr) - 1:
            IF arr[j] < item:
                pos = pos + 1

        # If the item is already in the correct position, continue
        IF pos == i:
            CONTINUE

        # Otherwise, place the item in the correct position
        WHILE item == arr[pos]:
            pos = pos + 1
        SWAP item WITH arr[pos]

        # Rotate the rest of the cycle
        WHILE pos != i:
            pos = i

            FOR j FROM i + 1 TO length(arr) - 1:
                IF arr[j] < item:
                    pos = pos + 1

            WHILE item == arr[pos]:
                pos = pos + 1
            SWAP item WITH arr[pos]

END FUNCTION

FUNCTION displayArray(arr):
    FOR EACH element IN arr:
        PRINT element
    END FOR
END FUNCTION

MAIN FUNCTION:
    DECLARE arr AS [20, 40, 50, 10, 30]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL cycleSort(arr)

    PRINT "Sorted array: "
    CALL displayArray(arr)
END MAIN FUNCTION
```

---

## **Implementations**

You can implement Cycle Sort in the following languages:
- [C++ Code](./cyclesort.cpp)
- [C Code](./cyclesort.c)
- [Python Code](./cyclesort.py)

Each language will follow the same logic and pseudocode, ensuring consistency across implementations.

---

## **Testing**

### **Test Cases**
Make sure to test your Cycle Sort implementation with different types of arrays:
1. **Random unsorted arrays**: `[20, 40, 50, 10, 30]`
2. **Already sorted arrays**: `[10, 20, 30, 40, 50]`
3. **Reverse sorted arrays**: `[50, 40, 30, 20, 10]`
4. **Arrays with duplicates**: `[20, 40, 20, 30, 50, 30]`

### **Expected Output**
For the input array `[20, 40, 50, 10, 30]`, the output after sorting should look like:

```plaintext
Original array: 20 40 50 10 30 
Sorted array: 10 20 30 40 50 
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Cycle Sort algorithm**: Learn how it minimizes the number of writes by moving each element to its correct position.
2. **Implement a unique sorting algorithm**: Gain experience with a lesser-known algorithm that prioritizes the number of writes over time complexity.
3. **Test sorting algorithms**: Learn how to validate your Cycle Sort implementation by running it on various test cases and verifying the results.

---

## **Further Improvements**

Once you have implemented Cycle Sort, you can further explore:
1. **Testing the performance**: Measure the performance of Cycle Sort on large datasets to see how it compares with other sorting algorithms.
2. **Analyzing the number of writes**: Track the number of writes performed by Cycle Sort and compare it with other sorting algorithms like Quick Sort or Merge Sort.
3. **Applying Cycle Sort to different types of data**: Experiment with arrays containing different data types or ranges of values to see how the algorithm behaves.

---

## **Resources**
- [GeeksforGeeks - Cycle Sort](https://www.geeksforgeeks.org/cycle-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Wikipedia - Cycle Sort](https://en.wikipedia.org/wiki/Cycle_sort)

---

## **Conclusion**

This README provides a detailed guide to implementing **Cycle Sort** in C++, C, and Python. Follow the pseudocode and structure to understand and develop your own implementation of Cycle Sort. This project will help you deepen your knowledge of sorting algorithms, particularly those that minimize the number of writes to memory.