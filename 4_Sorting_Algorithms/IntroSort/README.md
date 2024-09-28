# **IntroSort in C++, C, and Python**

## **Introduction**

**IntroSort** (short for **Introspective Sort**) is a hybrid sorting algorithm that combines **Quick Sort**, **Heap Sort**, and **Insertion Sort**. It begins with **Quick Sort**, but switches to **Heap Sort** if the recursion depth exceeds a level based on the logarithm of the number of elements. For small arrays, it switches to **Insertion Sort**. This approach combines the best features of each algorithm to deliver a highly efficient and reliable sorting method. **IntroSort** is used in many standard libraries, including the C++ STL.

### **Key Characteristics**:
- **Time Complexity**: O(n log n) in the worst case.
- **Space Complexity**: O(log n) due to the recursive nature of Quick Sort and Heap Sort.
- **In-place**: Yes.
- **Not Stable**: IntroSort does not preserve the relative order of equal elements.

---

## **Project Overview**

In this project, you will:
1. Implement **IntroSort** from scratch using a combination of Quick Sort, Heap Sort, and Insertion Sort.
2. Learn how to dynamically switch between sorting algorithms depending on the size of the dataset and the recursion depth.
3. Test the efficiency and correctness of your implementation with various datasets.

---

## **Understanding IntroSort**

### **How it Works**:
1. **Start with Quick Sort**: Begin sorting the array using **Quick Sort**.
2. **Switch to Heap Sort**: If the recursion depth becomes too deep (greater than 2 * log(n)), switch to **Heap Sort** to avoid Quick Sort's worst-case O(n²) behavior.
3. **Insertion Sort for Small Arrays**: For small arrays (usually less than 16 elements), use **Insertion Sort** since it performs better on smaller datasets.

### **When to Use**:
IntroSort is ideal when you need a highly efficient, reliable sorting algorithm that can handle various types of datasets and avoid the pitfalls of Quick Sort’s worst-case performance.

---

## **Project Structure**

For this project, you will implement:
1. **IntroSort Function** (`introSort`): The main function that decides which sorting algorithm to use based on recursion depth and array size.
2. **Helper Functions** (`quickSort`, `heapSort`, `insertionSort`, `partition`, `heapify`, `isSorted`, and `displayArray`):
   - **Quick Sort** for fast sorting of larger arrays.
   - **Heap Sort** for deep recursive calls.
   - **Insertion Sort** for small arrays.
   - A function to check if the array is sorted correctly.
   - A function to display the array before and after sorting.
3. **Main Program**: The driver code that tests the IntroSort implementation.

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

FUNCTION heapify(arr, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    IF left < n AND arr[left] > arr[largest]:
        largest = left
    IF right < n AND arr[right] > arr[largest]:
        largest = right

    IF largest != i:
        SWAP arr[i] WITH arr[largest]
        CALL heapify(arr, n, largest)
END FUNCTION

FUNCTION heapSort(arr):
    n = length(arr)

    FOR i FROM n//2 - 1 TO 0:
        CALL heapify(arr, n, i)

    FOR i FROM n-1 TO 1:
        SWAP arr[0] WITH arr[i]
        CALL heapify(arr, i, 0)
END FUNCTION

FUNCTION partition(arr, low, high):
    pivot = arr[high]
    i = low - 1

    FOR j FROM low TO high - 1:
        IF arr[j] <= pivot:
            i = i + 1
            SWAP arr[i] WITH arr[j]
    SWAP arr[i + 1] WITH arr[high]
    RETURN i + 1
END FUNCTION

FUNCTION quickSort(arr, low, high, depthLimit):
    IF high - low < 16:
        CALL insertionSort(arr, low, high)
    ELSE IF depthLimit == 0:
        CALL heapSort(arr[low to high])
    ELSE:
        pivot = partition(arr, low, high)
        CALL quickSort(arr, low, pivot - 1, depthLimit - 1)
        CALL quickSort(arr, pivot + 1, high, depthLimit - 1)
END FUNCTION

FUNCTION introSort(arr):
    depthLimit = 2 * log(length(arr))
    CALL quickSort(arr, 0, length(arr) - 1, depthLimit)
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
    DECLARE arr AS [19, 7, 10, 3, 15, 11, 4, 9, 20, 13]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL introSort(arr)

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

You can implement IntroSort in the following languages:
- [C++ Code](./introsort.cpp)
- [C Code](./introsort.c)
- [Python Code](./introsort.py)

Each implementation will follow the same logic, ensuring that the algorithm is efficient in any language.

---

## **Testing**

Test your **IntroSort** implementation on various datasets, including:
1. **Random unsorted arrays**: `[19, 7, 10, 3, 15, 11, 4, 9, 20, 13]`
2. **Already sorted arrays**: `[3, 4, 7, 9, 10, 11, 13, 15, 19, 20]`
3. **Reverse sorted arrays**: `[20, 19, 15, 13, 11, 10, 9, 7, 4, 3]`
4. **Arrays with duplicates**: `[5, 3, 7, 3, 5, 9, 1, 1, 2, 3]`

### **Expected Output**
For the input array `[19, 7, 10, 3, 15, 11, 4, 9, 20, 13]`, after sorting, the output should look like this:

```plaintext
Original array: 19 7 10 3 15 11 4 9 20 13 
Sorted array: 3 4 7 9 10 11 13 15 19 20 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the IntroSort algorithm**: How it dynamically switches between sorting methods based on the size of the dataset and recursion depth.
2. **Gain experience implementing hybrid sorting algorithms**: Combining Quick Sort, Heap Sort, and Insertion Sort.
3. **Improve problem-solving skills**: By building and testing a real-world, highly efficient sorting algorithm.
4. **Test and validate**: Your sorting algorithm using various datasets to ensure correctness and performance.

---

## **Further Improvements**

Once you have successfully implemented **IntroSort**, consider improving the project by:
1. Analyzing the **time complexity** on larger datasets and comparing it to other sorting algorithms.
2. Investigating performance improvements when handling edge cases like arrays with lots of duplicate elements.
3. Comparing the performance of **IntroSort** with other sorting algorithms like **Merge Sort**, **Quick Sort**, or **Heap Sort**.

---

## **Resources**
- [IntroSort Explanation on Wikipedia](https://en.wikipedia.org/wiki/Introsort)
- [GeeksforGeeks - IntroSort](https://www.geeksforgeeks.org/intro-sort/)
- [C++ STL IntroSort Documentation](https://en.cppreference.com/w/cpp/algorithm/sort)

---

## **Conclusion**

This README provides a detailed guide for implementing **IntroSort** in **C++**, **C**, and **Python**. Follow the pseudocode and structure to understand and implement this powerful sorting algorithm across multiple languages.