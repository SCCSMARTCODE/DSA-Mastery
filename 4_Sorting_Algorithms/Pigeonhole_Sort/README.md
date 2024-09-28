# **Pigeonhole Sort in C++, C, and Python**

## **Introduction**

**Pigeonhole Sort** is a non-comparison-based sorting algorithm that is suitable for sorting lists of integers where the range of the elements (the difference between the maximum and minimum value) is small. It works by placing each element in its corresponding pigeonhole (bucket), based on its value. Once all elements are placed in pigeonholes, they are then collected in order to form the sorted list.

This algorithm is ideal for cases where the values of the input are uniformly distributed over a known range.

### **Key Characteristics**:
- **Time Complexity**: O(n + range), where `n` is the number of elements and `range` is the difference between the maximum and minimum values.
- **Space Complexity**: O(range).
- **Stable**: Yes, the relative order of equal elements is preserved.
- **In-place**: No, it requires extra space for pigeonholes.

---

## **Project Overview**

In this project, you will:
1. Implement the **Pigeonhole Sort** algorithm.
2. Understand how the algorithm maps values to pigeonholes.
3. Test your implementation on different integer arrays.

---

## **Understanding Pigeonhole Sort**

### **How It Works**:
1. **Find Range**: Determine the minimum and maximum elements in the array, then calculate the range.
2. **Create Pigeonholes**: Create an array of pigeonholes based on the range.
3. **Place Elements in Pigeonholes**: Each element is placed in its corresponding pigeonhole.
4. **Collect Elements**: Once all elements are placed, the pigeonholes are iterated over, and the sorted list is collected.

---

## **Project Structure**

For this project, you will implement:
1. **Pigeonhole Sort Function** (`pigeonholeSort`): The main function that implements the sorting logic.
2. **Helper Functions** (`displayArray`): A function to print the array before and after sorting.
3. **Main Program**: The driver code to test your Pigeonhole Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION pigeonholeSort(arr):
    min_val = MIN(arr)
    max_val = MAX(arr)
    range = max_val - min_val + 1

    CREATE pigeonholes AS empty lists

    FOR EACH element IN arr:
        index = element - min_val
        ADD element TO pigeonholes[index]

    index = 0
    FOR EACH pigeonhole IN pigeonholes:
        FOR EACH element IN pigeonhole:
            arr[index] = element
            index = index + 1
    END FOR
END FUNCTION

FUNCTION displayArray(arr):
    FOR EACH element IN arr:
        PRINT element
    END FOR
END FUNCTION

MAIN FUNCTION:
    DECLARE arr AS [8, 3, 2, 7, 4, 6, 8, 5, 9]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL pigeonholeSort(arr)

    PRINT "Sorted array: "
    CALL displayArray(arr)
END MAIN FUNCTION
```

---

## **Implementations**

You can implement Pigeonhole Sort in the following languages:
- [C++ Code](./pigeonholesort.cpp)
- [C Code](./pigeonholesort.c)
- [Python Code](./pigeonholesort.py)

Each language will follow the same logic and pseudocode, ensuring consistency across implementations.

---

## **Testing**

### **Test Cases**
Make sure to test your Pigeonhole Sort implementation with various integer arrays:
1. **Random unsorted arrays**: `[8, 3, 2, 7, 4, 6, 8, 5, 9]`
2. **Already sorted arrays**: `[2, 3, 4, 5, 6, 7, 8, 9]`
3. **Reverse sorted arrays**: `[9, 8, 7, 6, 5, 4, 3, 2]`
4. **Arrays with duplicates**: `[5, 8, 5, 3, 7, 9, 3, 2, 4]`

### **Expected Output**
For the input array `[8, 3, 2, 7, 4, 6, 8, 5, 9]`, the output after sorting should look like:

```plaintext
Original array: 8 3 2 7 4 6 8 5 9 
Sorted array: 2 3 4 5 6 7 8 8 9 
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. **Understand the Pigeonhole Sort algorithm**: Learn how it leverages the distribution of values in a known range to efficiently sort arrays.
2. **Gain practical experience**: By implementing and testing Pigeonhole Sort, you’ll develop a deeper understanding of non-comparison-based sorting algorithms.
3. **Learn how to test sorting algorithms**: You’ll test your implementation on various cases, including random arrays, sorted arrays, and arrays with duplicates, to ensure correctness.

---

## **Further Improvements**

Once you’ve implemented Pigeonhole Sort, consider:
1. **Testing performance on larger datasets** with smaller ranges to observe the scalability of the algorithm.
2. **Comparing the performance of Pigeonhole Sort** with other sorting algorithms such as Quick Sort or Merge Sort.
3. **Optimizing the space usage**: Explore ways to minimize memory usage while maintaining the speed of the algorithm.

---

## **Resources**
- [GeeksforGeeks - Pigeonhole Sort](https://www.geeksforgeeks.org/pigeonhole-sort/)
- [Wikipedia - Pigeonhole Sort](https://en.wikipedia.org/wiki/Pigeonhole_sort)
- [C++ Documentation](https://en.cppreference.com/w/)

---

## **Conclusion**

This README provides a comprehensive guide to implementing **Pigeonhole Sort** in C++, C, and Python. Follow the pseudocode and project structure to understand and develop your own implementation of Pigeonhole Sort. This project will help you deepen your knowledge of sorting algorithms, particularly those based on the distribution of values within a given range.

---