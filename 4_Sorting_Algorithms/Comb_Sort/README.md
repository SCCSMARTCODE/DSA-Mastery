# **Comb Sort in C++, C, and Python**

## **Introduction**

**Comb Sort** is an improved version of the **Bubble Sort** algorithm that attempts to eliminate the small element "turtles" (small values near the end of the list) that slow down the sorting process in Bubble Sort. It does this by comparing elements that are farther apart and then gradually reducing the gap between elements, eventually becoming a Bubble Sort with a gap of 1.

Comb Sort is a simple and efficient algorithm with an average-case time complexity of **O(n log n)**, which is an improvement over Bubble Sort’s **O(n²)**.

### **Key Characteristics**:
- **Time Complexity**: O(n log n) on average, O(n²) in the worst case.
- **Space Complexity**: O(1) (in-place).
- **Not Stable**: The relative order of equal elements is not preserved.
- **In-place**: Yes, no extra space is required.

---

## **Project Overview**

In this project, you will:
1. Implement the **Comb Sort** algorithm.
2. Understand the importance of reducing the gap between compared elements.
3. Test your implementation across various cases, including sorted, reverse sorted, and random arrays.

---

## **Understanding Comb Sort**

### **How It Works**:
1. **Gap Calculation**: The core idea is to compare elements with a gap that starts large and shrinks by a shrink factor (commonly 1.3) in each iteration.
2. **Swapping**: Elements that are far apart are swapped if they are in the wrong order.
3. **Gradual Reduction**: As the gap becomes smaller, Comb Sort behaves more like Bubble Sort.
4. **Final Pass**: When the gap is 1, it performs a final pass similar to Bubble Sort to ensure the list is completely sorted.

---

## **Project Structure**

For this project, you will implement:
1. **Comb Sort Function** (`combSort`): The main function that implements the sorting logic with a gap reduction.
2. **Helper Functions** (`swap`, `displayArray`):
   - A swap function to exchange two elements.
   - A function to print the array before and after sorting.
3. **Main Program**: The driver code to test your Comb Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION combSort(arr):
    DECLARE gap AS length(arr)
    DECLARE shrinkFactor AS 1.3
    DECLARE sorted AS False

    WHILE sorted IS False:
        gap = FLOOR(gap / shrinkFactor)

        IF gap <= 1:
            gap = 1
            sorted = True

        FOR i FROM 0 TO length(arr) - gap:
            IF arr[i] > arr[i + gap]:
                SWAP arr[i] WITH arr[i + gap]
                sorted = False
    END WHILE
END FUNCTION

FUNCTION swap(arr, i, j):
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp
END FUNCTION

FUNCTION displayArray(arr):
    FOR EACH element IN arr:
        PRINT element
    END FOR
END FUNCTION

MAIN FUNCTION:
    DECLARE arr AS [32, 24, 12, 44, 31, 17, 23, 4]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL combSort(arr)

    PRINT "Sorted array: "
    CALL displayArray(arr)
END MAIN FUNCTION
```

---

## **Implementations**

You can implement Comb Sort in the following languages:
- [C++ Code](./combsort.cpp)
- [C Code](./combsort.c)
- [Python Code](./combsort.py)

Each language will follow the same logic and pseudocode, ensuring consistency in how the algorithm works across implementations.

---

## **Testing**

### **Test Cases**
Make sure to test your Comb Sort implementation with various types of arrays:
1. **Unsorted arrays**: `[32, 24, 12, 44, 31, 17, 23, 4]`
2. **Already sorted arrays**: `[4, 12, 17, 23, 24, 31, 32, 44]`
3. **Reverse sorted arrays**: `[44, 32, 31, 24, 23, 17, 12, 4]`
4. **Arrays with duplicates**: `[23, 4, 12, 23, 17, 12, 44, 31]`

### **Expected Output**
For the input array `[32, 24, 12, 44, 31, 17, 23, 4]`, the output after sorting should look like:

```plaintext
Original array: 32 24 12 44 31 17 23 4 
Sorted array: 4 12 17 23 24 31 32 44 
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Comb Sort algorithm**: Learn how it improves upon Bubble Sort by using a shrinking gap strategy.
2. **Improve problem-solving skills**: By implementing and testing Comb Sort, you will strengthen your ability to develop sorting algorithms from scratch.
3. **Learn to test sorting algorithms**: You’ll test your implementation on various cases like random, sorted, and reverse sorted arrays to validate correctness.

---

## **Further Improvements**

Once you’ve implemented Comb Sort, consider:
1. **Testing performance on larger datasets** to see how the algorithm behaves as array size increases.
2. **Comparing Comb Sort’s performance** with other sorting algorithms like Quick Sort, Merge Sort, and Bubble Sort.
3. **Experimenting with different shrink factors**: Instead of the standard 1.3, you can try other shrink factors and observe the performance changes.

---

## **Resources**
- [GeeksforGeeks - Comb Sort](https://www.geeksforgeeks.org/comb-sort/)
- [Wikipedia - Comb Sort](https://en.wikipedia.org/wiki/Comb_sort)
- [C++ Documentation](https://en.cppreference.com/w/)

---

## **Conclusion**

This README provides a comprehensive guide to implementing **Comb Sort** in C++, C, and Python. Follow the pseudocode and project structure to understand and develop your own implementation of Comb Sort. This will not only help you understand the algorithm but also improve your sorting skills by learning how to optimize and test sorting algorithms.

---