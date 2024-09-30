# **Timsort in C++, C, and Python**

## **Introduction**

**Timsort** is a hybrid sorting algorithm derived from **Merge Sort** and **Insertion Sort**. It is highly efficient for real-world data and is the default sorting algorithm used in Python and Java. Timsort works by dividing the input array into small chunks, known as "runs," which are sorted using **Insertion Sort**, and then merges these runs using a modified version of **Merge Sort**. 

### **Key Characteristics**:
- **Time Complexity**: O(n log n) in the worst case, but performs significantly better with partially sorted data.
- **Space Complexity**: O(n) due to the need for auxiliary storage during the merge process.
- **Stable**: Yes, it preserves the order of equal elements.
- **In-place**: Partially in-place, but uses auxiliary space for merging.

---

## **Project Overview**

In this project, you will:
1. Implement the **Timsort** algorithm from scratch.
2. Learn how to divide arrays into runs and sort them with **Insertion Sort**.
3. Use a **Merge Sort** process to combine runs and achieve the final sorted array.
4. Test your implementation on various datasets to verify its efficiency.

---

## **Understanding Timsort**

### **How it Works**:
1. **Divide into Runs**: The input array is divided into small chunks or "runs." These runs are typically 32-64 elements in size. Small runs are sorted using **Insertion Sort** because it performs well on smaller datasets.
2. **Merging Runs**: After sorting the runs, Timsort uses a modified version of **Merge Sort** to merge these runs, ensuring that the result is a fully sorted array.

### **When to Use**:
Timsort is best used when you need a fast, stable, and efficient sorting algorithm, particularly for datasets with some inherent order or partial sorting.

---

## **Project Structure**

For this project, you will implement:
1. **Timsort Function** (`timsort`): The main sorting function that divides elements into runs and merges them.
2. **Helper Functions** (`insertionSort`, `mergeRuns`, `isSorted`, and `displayArray`): 
   - **Insertion Sort** for sorting small runs.
   - **Merge Function** to merge sorted runs.
   - A function to check if the array is sorted correctly.
   - A function to display the array before and after sorting.
3. **Main Program**: The driver code that tests the Timsort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION insertionSort(arr, left, right):
    FOR i FROM left TO right:
        key = arr[i]
        j = i - 1
        WHILE j >= left AND arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key
    END FOR
END FUNCTION

FUNCTION merge(arr, left, mid, right):
    CREATE leftHalf FROM arr[left to mid]
    CREATE rightHalf FROM arr[mid+1 to right]

    i, j, k = 0, 0, left

    WHILE i < length(leftHalf) AND j < length(rightHalf):
        IF leftHalf[i] <= rightHalf[j]:
            arr[k] = leftHalf[i]
            i = i + 1
        ELSE:
            arr[k] = rightHalf[j]
            j = j + 1
        k = k + 1

    COPY remaining elements of leftHalf IF ANY
    COPY remaining elements of rightHalf IF ANY
END FUNCTION

FUNCTION timsort(arr):
    n = length(arr)
    RUN = 32

    FOR i FROM 0 TO n BY RUN:
        CALL insertionSort(arr, i, min(i + RUN - 1, n - 1))

    size = RUN
    WHILE size < n:
        FOR left FROM 0 TO n - size BY 2*size:
            mid = left + size - 1
            right = min(left + 2*size - 1, n - 1)
            CALL merge(arr, left, mid, right)
        size = 2*size
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
    DECLARE arr AS [5, 21, 7, 23, 19, 10, 12, 3, 16, 6]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL timsort(arr)

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

You can implement Timsort in the following languages:
- [C++ Code](./timsort.cpp)
- [C Code](./timsort.c)
- [Python Code](./timsort.py)

Each implementation will closely follow the pseudocode, ensuring consistency across all languages.

---

## **Testing**

Test your **Timsort** implementation on various datasets, including:
1. **Random unsorted arrays**: `[5, 21, 7, 23, 19, 10, 12, 3, 16, 6]`
2. **Already sorted arrays**: `[3, 5, 6, 7, 10, 12, 16, 19, 21, 23]`
3. **Reverse sorted arrays**: `[23, 21, 19, 16, 12, 10, 7, 6, 5, 3]`
4. **Arrays with duplicates**: `[5, 3, 7, 3, 5, 9, 1, 1, 2, 3]`

### **Expected Output**
For the input array `[5, 21, 7, 23, 19, 10, 12, 3, 16, 6]`, after sorting, the output should look like this:

```plaintext
Original array: 5 21 7 23 19 10 12 3 16 6 
Sorted array: 3 5 6 7 10 12 16 19 21 23 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Timsort algorithm**: Its hybrid nature combining **Insertion Sort** and **Merge Sort**.
2. **Gain experience implementing and understanding**: A real-world sorting algorithm used in modern programming languages.
3. **Improve problem-solving skills**: By building and testing a complex algorithm from scratch.
4. **Test and validate**: Your sorting algorithm using various datasets to ensure efficiency.

---

## **Further Improvements**

Once you have successfully implemented **Timsort**, consider improving the project by:
1. Analyzing the **time complexity** of Timsort on larger datasets and comparing it to other sorting algorithms.
2. Adding the ability to sort non-uniform arrays, such as arrays of objects with keys.
3. Comparing the performance of Timsort with other sorting algorithms like **Quick Sort** or **Heap Sort**.

---

## **Resources**
- [Python's Timsort Algorithm](https://en.wikipedia.org/wiki/Timsort)
- [GeeksforGeeks - Timsort](https://www.geeksforgeeks.org/timsort/)
- [C++ Documentation](https://en.cppreference.com/w/)

---

## **Conclusion**

This README provides a structured guide for implementing **Timsort** in **C++**, **C**, and **Python**. By following the pseudocode and structure provided, you will be able to understand and implement this hybrid sorting algorithm in any of these languages and use it to sort different datasets efficiently.