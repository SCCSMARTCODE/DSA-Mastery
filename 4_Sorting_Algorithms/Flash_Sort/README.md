# **Flash Sort in C++, C, and Python**

## **Introduction**

**Flash Sort** is a distribution sorting algorithm that is particularly effective for sorting large arrays of numbers. It combines the advantages of both partitioning and insertion methods, achieving better performance than comparison-based sorting algorithms like Quick Sort and Merge Sort. Flash Sort is most efficient when the input data is uniformly distributed.

### **Key Characteristics**:
- **Time Complexity**: O(n) on average, but can degrade to O(n²) in the worst case.
- **Space Complexity**: O(n) due to the storage of auxiliary data structures.
- **Stable**: No, it does not maintain the relative order of equal elements.
- **In-place**: Partially; it uses extra space for auxiliary arrays but is more space-efficient compared to some algorithms.

---

## **Project Overview**

In this project, you will:
1. Implement the **Flash Sort** algorithm from scratch.
2. Understand how the algorithm distributes elements into classes and sorts them.
3. Test the algorithm on various integer arrays to ensure its functionality.

---

## **Understanding Flash Sort**

### **How It Works**:
1. **Class Creation**: The array is divided into a fixed number of classes based on the range of values.
2. **Distribution**: Each element is assigned to a class based on its value.
3. **Insertion**: Each class is sorted using a simple algorithm (like insertion sort) once the distribution phase is complete.
4. **Concatenation**: The sorted classes are then concatenated to form the final sorted array.

Flash Sort is efficient for large datasets because it minimizes comparisons and leverages the properties of distribution.

---

## **Project Structure**

For this project, you will need:
1. **Flash Sort Function** (`flashSort`): The main function to implement the Flash Sort logic.
2. **Helper Functions** (`displayArray`): A function to print the array before and after sorting.
3. **Main Program**: The driver code to test your Flash Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION flashSort(arr):
    n = length(arr)
    minVal = findMin(arr)
    maxVal = findMax(arr)
    numClasses = determineNumberOfClasses()
    classSize = (maxVal - minVal) / numClasses

    DECLARE classes AS ARRAY OF SIZE numClasses
    INITIALIZE classes TO EMPTY LISTS

    # Distributing elements into classes
    FOR i FROM 0 TO n - 1:
        index = (arr[i] - minVal) / classSize
        APPEND arr[i] TO classes[index]
    
    # Sorting each class using insertion sort
    FOR each class IN classes:
        insertionSort(class)

    # Concatenating sorted classes back into arr
    index = 0
    FOR each class IN classes:
        FOR each element IN class:
            arr[index] = element
            index = index + 1

END FUNCTION

FUNCTION insertionSort(class):
    FOR i FROM 1 TO length(class) - 1:
        key = class[i]
        j = i - 1
        WHILE j >= 0 AND class[j] > key:
            class[j + 1] = class[j]
            j = j - 1
        class[j + 1] = key
END FUNCTION

FUNCTION displayArray(arr):
    FOR EACH element IN arr:
        PRINT element
    END FOR
END FUNCTION

MAIN FUNCTION:
    DECLARE arr AS [34, 7, 23, 32, 5, 62]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL flashSort(arr)

    PRINT "Sorted array: "
    CALL displayArray(arr)
END MAIN FUNCTION
```

---

## **Implementations**

You can implement Flash Sort in the following languages:
- [C++ Code](./flashsort.cpp)
- [C Code](./flashsort.c)
- [Python Code](./flashsort.py)

Each language will follow the same logic and pseudocode, ensuring consistency across implementations.

---

## **Testing**

### **Test Cases**
Make sure to test your Flash Sort implementation with different types of arrays:
1. **Random unsorted arrays**: `[34, 7, 23, 32, 5, 62]`
2. **Already sorted arrays**: `[5, 23, 34, 32, 62]`
3. **Reverse sorted arrays**: `[62, 34, 32, 23, 7, 5]`
4. **Arrays with duplicates**: `[5, 7, 5, 34, 7, 62]`

### **Expected Output**
For the input array `[34, 7, 23, 32, 5, 62]`, the output after sorting should look like:

```plaintext
Original array: 34 7 23 32 5 62 
Sorted array: 5 7 23 32 34 62 
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Flash Sort algorithm**: Learn its distribution-based approach and how it achieves linear time complexity on average.
2. **Implement an efficient sorting algorithm**: Gain experience in creating a sorting algorithm that is faster than many traditional sorting methods under certain conditions.
3. **Test sorting algorithms**: Learn how to validate your Flash Sort implementation by running it on various test cases and verifying the results.

---

## **Further Improvements**

Once you have implemented Flash Sort, consider exploring:
1. **Performance testing**: Measure the performance of Flash Sort on larger datasets and compare it with other sorting algorithms.
2. **Edge case handling**: Improve your implementation to handle edge cases like empty arrays or arrays with only one element.
3. **Adaptive modifications**: Explore modifications to make Flash Sort more adaptable to different input distributions.

---

## **Resources**
- [GeeksforGeeks - Flash Sort](https://www.geeksforgeeks.org/flash-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Wikipedia - Flash Sort](https://en.wikipedia.org/wiki/Flashsort)

---

## **Conclusion**

This README provides a detailed guide to implementing **Flash Sort** in C++, C, and Python. Follow the pseudocode and structure to understand and develop your own implementation of Flash Sort. This project will help you deepen your knowledge of sorting algorithms that leverage distribution for efficiency.