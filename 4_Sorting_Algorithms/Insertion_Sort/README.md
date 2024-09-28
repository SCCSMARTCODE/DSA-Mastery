# **Insertion Sort in C++, C, and Python**

## **Introduction**
Insertion Sort is a simple and intuitive sorting algorithm. It works similarly to how you might sort playing cards in your hands. The algorithm builds the sorted array one element at a time by comparing each new element to the ones already sorted and inserting it in the correct position.

This project focuses on implementing **Insertion Sort** in **C++**, **C**, and **Python** from scratch. You will also validate the sorting algorithm using test cases to ensure its correctness.

---

## **Project Overview**

This project includes:
1. Implementing the **Insertion Sort** algorithm.
2. Writing a function to check if an array is sorted.
3. Testing the implementation on various datasets.

The goal is to help you understand Insertion Sort and give you hands-on experience in sorting arrays using this algorithm.

---

## **Understanding Insertion Sort**

Insertion Sort involves the following steps:
1. Iterate through the array, starting with the second element.
2. Compare the current element to the elements before it.
3. Shift all elements larger than the current element one position to the right.
4. Insert the current element in its correct position.
5. Repeat the process until the array is sorted.

The **time complexity** of Insertion Sort is **O(n^2)** in the worst case (when the array is reverse sorted), but it is **O(n)** for nearly sorted arrays, making it efficient for small datasets or partially sorted arrays.

---

## **Project Structure**

This project includes:
- **Insertion Sort Function** (`insertionSort`): The core sorting function.
- **Validation Function** (`isSorted`): Checks if the array is sorted.
- **Display Function** (`displayArray`): Displays the array before and after sorting.
- **Main Program**: Drives the program by calling these functions.

---

## **Main Components**

### **Pseudocode for the Project**

The pseudocode will help guide the implementation in C++, C, and Python:

```plaintext
FUNCTION insertionSort(arr):
    FOR i FROM 1 TO length(arr):
        SET key = arr[i]
        SET j = i - 1
        WHILE j >= 0 AND arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key
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
    DECLARE arr AS [12, 11, 13, 5, 6]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL insertionSort(arr)

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

You will implement the following files:

- [C++ Code](./insertion_sort.cpp)
- [C Code](./insertion_sort.c)
- [Python Code](./insertion_sort.py)

Make sure your code reflects the pseudocode logic in each of the languages.

---

## **Testing**

Once you've implemented the Insertion Sort algorithm, you should test it on various arrays, such as:
1. **Random unsorted arrays**: `[15, 19, 8, 2, 17]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5]`
3. **Reverse sorted arrays**: `[20, 15, 10, 5, 1]`
4. **Arrays with negative numbers**: `[-8, -3, -1, -9, 0]`
5. **Arrays with duplicates**: `[7, 3, 7, 1, 5, 7]`

### **Example Output**
After running the program, you should see the following output:

```plaintext
Original array: 12 11 13 5 6
Sorted array: 5 6 11 12 13
The array is sorted correctly.
```

---

## **Learning Outcomes**

By completing this project, you will:
1. Understand the **Insertion Sort** algorithm and its performance.
2. Be able to implement Insertion Sort in **C++**, **C**, and **Python**.
3. Validate your sorting function by testing it on various datasets.
4. Improve your problem-solving skills through hands-on coding and debugging.

---

## **Further Improvements**

Once you've implemented Insertion Sort, consider:
1. Measuring the **time complexity** on different datasets and comparing Insertion Sort to more advanced algorithms like Merge Sort or Quick Sort.
2. Testing on larger datasets to better understand its performance.
3. Implementing optimizations to reduce unnecessary comparisons for nearly sorted arrays.

---

## **Resources**
- [GeeksforGeeks - Insertion Sort](https://www.geeksforgeeks.org/insertion-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This project is an excellent way to learn about sorting algorithms and get hands-on experience with **Insertion Sort**. By following the pseudocode and implementing it in multiple programming languages, you'll gain a deeper understanding of the algorithm and its nuances.
