# **Shell Sort in C++, C, and Python**

## **Introduction**
**Shell Sort** is an optimized version of **Insertion Sort**. It improves the time complexity by allowing comparisons and swaps over larger gaps (or intervals) between elements. The algorithm gradually reduces the gap between elements, performing a final pass with a gap of 1, which is essentially **Insertion Sort**. It’s named after **Donald Shell**, who introduced it in 1959. Shell Sort performs well on medium-sized datasets but isn't as efficient as more advanced algorithms like **Quick Sort** or **Merge Sort** for very large datasets.

---

## **Project Overview**

In this project, you will:
1. Implement **Shell Sort** from scratch in **C++**, **C**, and **Python**.
2. Use a helper function to verify the correctness of the sorting algorithm.
3. Test your implementation on different datasets to observe performance and accuracy.

---

## **Understanding Shell Sort**

**Shell Sort** works by:
1. Dividing the array into subarrays using a large gap value.
2. Applying an **Insertion Sort**-like process within those subarrays.
3. Reducing the gap and repeating the process until the gap becomes 1.

### **Key Characteristics**:
- **Time Complexity**:
  - Worst Case: **O(n²)** (depends on gap sequence used)
  - Best Case: **O(n log n)**
- **Space Complexity**: **O(1)** (in-place sorting)
- **In-place**: Yes.
- **Stable**: No, relative order of equal elements may change.

### **Common Gap Sequences**:
- **Shell’s Original Sequence**: Starts with a gap of ⌊n/2⌋ and halves the gap in each iteration.
- **Knuth’s Sequence**: Gap values are derived from the formula `(3^k - 1) / 2`.

---

## **Project Structure**

This project will consist of the following:
1. **Shell Sort Function** (`shellSort`): Implements the sorting algorithm.
2. **Helper Functions** (`isSorted` and `displayArray`): To check if the array is sorted and display the array before and after sorting.
3. **Main Program**: The driver code that tests the sorting algorithm on various datasets.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION shellSort(arr):
    SET n = length(arr)
    SET gap = n / 2

    WHILE gap > 0:
        FOR i FROM gap TO n - 1:
            SET temp = arr[i]
            SET j = i

            WHILE j >= gap AND arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j = j - gap

            arr[j] = temp

        gap = gap / 2
    END WHILE
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

    CALL shellSort(arr)

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

The Shell Sort algorithm can be implemented in:
- [C++ Code](./shell_sort.cpp)
- [C Code](./shell_sort.c)
- [Python Code](./shell_sort.py)

Each of these implementations will follow the pseudocode provided, and the logic remains consistent across different programming languages.

---

## **Testing**

You should test your **Shell Sort** implementation on various datasets:
1. **Random unsorted arrays**: `[64, 34, 25, 12, 22, 11, 90]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5, 6, 7]`
3. **Reverse sorted arrays**: `[10, 9, 8, 7, 6, 5, 4]`
4. **Arrays with negative numbers**: `[-5, -3, 0, 2, 8, -1]`
5. **Arrays with duplicates**: `[3, 1, 4, 3, 2, 5]`

### **Expected Output**
For a given array like `[64, 34, 25, 12, 22, 11, 90]`, after sorting, you should see:

```plaintext
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. Understand the **Shell Sort** algorithm, its working, and how it differs from **Insertion Sort**.
2. Learn how to write an in-place sorting algorithm.
3. Improve problem-solving skills by writing the algorithm from scratch in different languages.
4. Understand how to validate sorting algorithms using helper functions.

---

## **Further Improvements**

After implementing **Shell Sort**, consider exploring the following:
1. **Experiment with different gap sequences**: Implement gap sequences such as Knuth’s or Sedgewick’s to see how they impact performance.
2. **Compare the performance**: Compare **Shell Sort** with other sorting algorithms like **Quick Sort**, **Merge Sort**, or **Heap Sort** to understand the differences in efficiency.
3. **Analyze performance on larger datasets**: Test your implementation with larger arrays to observe how performance changes with input size.

---

## **Resources**
- [GeeksforGeeks - Shell Sort](https://www.geeksforgeeks.org/shellsort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This README guides you through the **Shell Sort** algorithm. By implementing it in **C++**, **C**, and **Python**, you’ll gain a deeper understanding of sorting algorithms and how different gap sequences affect their performance. Ensure you test thoroughly and explore ways to optimize your implementation.