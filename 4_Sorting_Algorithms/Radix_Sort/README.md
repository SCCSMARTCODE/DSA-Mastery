# **Radix Sort in C++, C, and Python**

## **Introduction**

**Radix Sort** is an integer sorting algorithm that sorts numbers digit by digit, starting from the least significant digit (LSD) to the most significant digit (MSD), or vice versa, depending on the implementation. It uses a stable sorting algorithm such as **Counting Sort** as a subroutine to sort the digits. Radix Sort is particularly efficient for sorting large numbers with multiple digits, and it works best when the range of the elements (number of digits) is known in advance.

Radix Sort has a time complexity of **O(d * (n + k))**, where **d** is the number of digits, **n** is the number of elements, and **k** is the range of individual digit values (often 0-9 for base 10).

---

## **Project Overview**

In this project, you will:
1. Implement **Radix Sort** to sort arrays of integers by their digits.
2. Use **Counting Sort** as a helper function to sort individual digits.
3. Test your Radix Sort implementation on various datasets and validate that the array is sorted correctly.

---

## **Understanding Radix Sort**

Radix Sort processes the elements of the array one digit at a time:
1. For each digit (starting from the least significant digit or most significant digit):
   - Sort the elements based on the current digit using **Counting Sort**.
   - Move to the next significant digit.
2. The process continues until all digits are sorted.

### **Key Characteristics**:
- **Time Complexity**: **O(d * (n + k))**, where **d** is the number of digits, **n** is the number of elements, and **k** is the base or range of digit values.
- **Space Complexity**: **O(n + k)** due to the use of a count array.
- **Stable**: Yes, it maintains the relative order of elements with equal keys.
- **Not In-place**: It requires extra memory for sorting digits.

---

## **Project Structure**

In this project, you will implement:
1. **Radix Sort Function** (`radixSort`): The main sorting algorithm that uses Counting Sort as a subroutine.
2. **Helper Functions** (`countingSort`, `isSorted`, and `displayArray`): Counting Sort to sort digits, a function to check if the array is sorted, and a function to display the array.
3. **Main Program**: The driver code that tests the Radix Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION countingSort(arr, exp):
    CREATE count array of size 10, initialized to 0
    CREATE output array of same size as arr
    
    FOR i FROM 0 TO length(arr) - 1:
        index = (arr[i] // exp) % 10
        INCREMENT count[index] BY 1
    
    MODIFY count array so each element stores the sum of previous counts
    
    FOR i FROM length(arr) - 1 TO 0:
        index = (arr[i] // exp) % 10
        output[count[index] - 1] = arr[i]
        DECREMENT count[index] BY 1
    
    COPY output array to arr

END FUNCTION

FUNCTION radixSort(arr):
    SET max_val = FIND maximum value in arr
    
    SET exp = 1
    WHILE max_val // exp > 0:
        CALL countingSort(arr, exp)
        SET exp = exp * 10
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
    DECLARE arr AS [170, 45, 75, 90, 802, 24, 2, 66]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL radixSort(arr)

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

You can implement Radix Sort in the following languages:
- [C++ Code](./radix_sort.cpp)
- [C Code](./radix_sort.c)
- [Python Code](./radix_sort.py)

Each implementation will closely follow the pseudocode, ensuring the same logic is applied across all languages.

---

## **Testing**

Test your **Radix Sort** implementation on various types of datasets:
1. **Random unsorted arrays**: `[170, 45, 75, 90, 802, 24, 2, 66]`
2. **Already sorted arrays**: `[1, 2, 3, 4, 5, 6]`
3. **Reverse sorted arrays**: `[10, 9, 8, 7, 6, 5, 4]`
4. **Arrays with negative numbers**: Radix Sort generally works on positive integers. However, you can implement a variation to handle negative numbers.
5. **Arrays with large numbers**: `[23456, 7890, 1234, 567890, 345]`

### **Expected Output**
For the input array `[170, 45, 75, 90, 802, 24, 2, 66]`, after sorting, the output should look like this:

```plaintext
Original array: 170 45 75 90 802 24 2 66 
Sorted array: 2 24 45 66 75 90 170 802 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. Understand the working of **Radix Sort** and its use of digit-by-digit sorting.
2. Learn how to implement **Counting Sort** as a subroutine for sorting the digits.
3. Improve your ability to implement non-comparative sorting algorithms.
4. Develop problem-solving skills by writing algorithms from scratch and testing their correctness.

---

## **Further Improvements**

Once you have successfully implemented the basic **Radix Sort**, consider these potential improvements:
1. Modify the algorithm to handle negative numbers.
2. Test with larger datasets and measure time performance.
3. Compare the efficiency of Radix Sort with other algorithms like **Quick Sort** or **Merge Sort**.

---

## **Resources**
- [GeeksforGeeks - Radix Sort](https://www.geeksforgeeks.org/radix-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This README provides a clear introduction to the **Radix Sort** algorithm and its implementation in **C++**, **C**, and **Python**. The pseudocode and explanation will help guide your development process and ensure that you understand the core concepts behind Radix Sort.