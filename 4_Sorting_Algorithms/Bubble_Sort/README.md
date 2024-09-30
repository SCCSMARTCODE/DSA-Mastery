# **Bubble Sort in C++, C, and Python**

## **Introduction**
Bubble Sort is a simple yet fundamental sorting algorithm that works by repeatedly stepping through a list, comparing adjacent elements, and swapping them if they are in the wrong order. Although not the most efficient for large datasets, it is a great starting point for learning algorithm design and understanding basic sorting concepts.

In this project, we implement the Bubble Sort algorithm in **C++**, **C**, and **Python** from scratch. You will also test the algorithm on various cases to ensure its correctness and performance.

---

## **Project Overview**
This project covers:
1. Implementing the **Bubble Sort** algorithm.
2. Writing a function to **verify** if the list is correctly sorted.
3. Testing the implementation with multiple **test cases**.

The goal is to help you understand Bubble Sort and learn how to structure algorithms across different programming languages.

---

## **Understanding Bubble Sort**

Bubble Sort works by:
1. Repeatedly comparing adjacent elements.
2. Swapping them if they are in the wrong order.
3. The largest unsorted element "bubbles up" to its correct position in each pass.
4. The process continues until the list is sorted.

---

## **Project Structure**

This project includes the following components:

1. **Sorting Function (`bubbleSort`)**: This will implement the Bubble Sort algorithm.
2. **Validation Function (`isSorted`)**: This will verify if the list is sorted.
3. **Display Function (`displayArray`)**: This will display the list before and after sorting.
4. **Main Program**: Handles testing the sorting algorithm on various arrays.

Each of these components will be implemented in **C++**, **C**, and **Python**.

---

## **Main Components**

### **Pseudocode for the Project**

The pseudocode serves as a guide for implementing the solution in any language (C++, C, or Python):

```plaintext
FUNCTION bubbleSort(arr):
    FOR i FROM 0 TO length(arr) - 1:
        FOR j FROM 0 TO length(arr) - i - 1:
            IF arr[j] > arr[j + 1]:
                SWAP arr[j] WITH arr[j + 1]
    END FOR
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

    CALL bubbleSort(arr)

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
The solution will be implemented in the following languages:

- [C++ Code](./bubble_sort.cpp)
- [C Code](./bubble_sort.c)
- [Python Code](./bubble_sort.py)

Make sure the logic in the pseudocode is reflected in each implementation.

---

## **Testing**

You can validate your Bubble Sort implementation using various test cases:

1. **Random unsorted arrays**: `[10, 5, 8, 1, 3]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5]`
3. **Reverse sorted arrays**: `[5, 4, 3, 2, 1]`
4. **Arrays with negative numbers**: `[-3, -1, 2, -5, 0]`
5. **Arrays with duplicates**: `[5, 3, 8, 3, 1, 3]`

### **Example Output**
After running the program, you should expect the following output:

```plaintext
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 
The array is sorted correctly.
```

Make sure to test each implementation to confirm that the sorting logic works as expected.

---

## **Learning Outcomes**
By the end of this project, you should:
1. Understand how **Bubble Sort** works.
2. Implement the algorithm from scratch in **C++**, **C**, and **Python**.
3. Be able to validate your implementation using custom test cases.
4. Gain a better understanding of algorithmic thinking and problem-solving skills.

---

## **Further Improvements**

To enhance your learning, consider adding the following to your project:
1. Measure the **execution time** of the algorithm on larger arrays.
2. Experiment with **other sorting algorithms** like Quick Sort and Merge Sort.
3. Add **logging functionality** to track the number of swaps or passes in each execution.
4. Optimize the algorithm by adding a check to exit early if the array becomes sorted before completing all passes.

---

## **Resources**
- [GeeksforGeeks - Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**
This project is a great stepping stone for understanding basic sorting algorithms and how to implement them in multiple languages. With the pseudocode and structured approach, you can easily adapt the Bubble Sort algorithm in C++, C, and Python.
