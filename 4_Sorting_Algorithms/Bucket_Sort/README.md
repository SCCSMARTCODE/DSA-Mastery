# **Bucket Sort in C++, C, and Python**

## **Introduction**

**Bucket Sort** is a distribution-based sorting algorithm that works by dividing an input array into several "buckets." Each bucket is then sorted individually using another sorting algorithm (like **Insertion Sort**). Once all the buckets are sorted, the elements are gathered in order to form the final sorted array. Bucket Sort is highly efficient when the input data is uniformly distributed over a range, and its time complexity can approach **O(n)** under ideal circumstances.

### **Key Characteristics**:
- **Time Complexity**: Average case is **O(n + k)**, where **n** is the number of elements and **k** is the number of buckets.
- **Space Complexity**: **O(n + k)**, due to the need for additional buckets.
- **Stable**: Depends on the sorting algorithm used within the buckets.
- **Not In-place**: Requires additional space for the buckets.

---

## **Project Overview**

In this project, you will:
1. Implement **Bucket Sort** for floating-point numbers in the range [0, 1).
2. Use **Insertion Sort** to sort individual buckets.
3. Test your implementation on various datasets to ensure the correctness of your algorithm.

---

## **Understanding Bucket Sort**

### **How it works**:
1. **Dividing into Buckets**: The array is divided into a number of buckets. Each bucket will contain a range of elements.
2. **Sorting Each Bucket**: Elements in each bucket are sorted individually using a sorting algorithm like Insertion Sort.
3. **Concatenating Buckets**: After sorting each bucket, all buckets are concatenated to form the final sorted array.

### **When to Use**:
Bucket Sort is most effective when:
- The input data is uniformly distributed.
- The input consists of floating-point numbers or integers that can be mapped to buckets.

---

## **Project Structure**

For this project, you will implement:
1. **Bucket Sort Function** (`bucketSort`): The main sorting function that divides elements into buckets and sorts them.
2. **Helper Functions** (`insertionSort`, `isSorted`, and `displayArray`): 
   - **Insertion Sort** for sorting individual buckets.
   - A function to check if the array is sorted correctly.
   - A function to display the array before and after sorting.
3. **Main Program**: The driver code that tests the Bucket Sort implementation.

---

## **Main Components**

### **Pseudocode for the Project**

```plaintext
FUNCTION insertionSort(arr):
    FOR i FROM 1 TO length(arr):
        key = arr[i]
        j = i - 1
        WHILE j >= 0 AND arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key
    END FOR
END FUNCTION

FUNCTION bucketSort(arr):
    SET n = length(arr)
    CREATE n empty buckets
    
    FOR i FROM 0 TO n-1:
        INSERT arr[i] INTO appropriate bucket
    
    FOR EACH bucket IN buckets:
        CALL insertionSort(bucket)
    
    CONCATENATE buckets to form sorted array
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
    DECLARE arr AS [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]

    PRINT "Original array: "
    CALL displayArray(arr)

    CALL bucketSort(arr)

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

You can implement Bucket Sort in the following languages:
- [C++ Code](./bucket_sort.cpp)
- [C Code](./bucket_sort.c)
- [Python Code](./bucket_sort.py)

Each implementation will closely follow the pseudocode, ensuring consistency across all languages.

---

## **Testing**

Test your **Bucket Sort** implementation on various types of datasets, including:
1. **Random floating-point arrays**: `[0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]`
2. **Already sorted arrays**: `[0.12, 0.17, 0.21, 0.23, 0.26, 0.39, 0.68, 0.72, 0.78, 0.94]`
3. **Reverse sorted arrays**: `[0.94, 0.78, 0.72, 0.68, 0.39, 0.26, 0.23, 0.21, 0.17, 0.12]`

### **Expected Output**
For the input array `[0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]`, after sorting, the output should look like this:

```plaintext
Original array: 0.78 0.17 0.39 0.26 0.72 0.94 0.21 0.12 0.23 0.68 
Sorted array: 0.12 0.17 0.21 0.23 0.26 0.39 0.68 0.72 0.78 0.94 
The array is sorted correctly.
```

---

## **Learning Outcomes**

By the end of this project, you will:
1. Understand the mechanics of **Bucket Sort** and how it distributes data into buckets.
2. Learn how to implement **Insertion Sort** to sort individual buckets.
3. Improve your problem-solving skills by implementing and testing an algorithm from scratch.
4. Develop a deeper understanding of non-comparative sorting algorithms.

---

## **Further Improvements**

Once you’ve implemented the basic **Bucket Sort**, you can consider enhancing the project by:
1. Modifying the algorithm to handle larger datasets or datasets with different ranges.
2. Experimenting with different bucket counts to observe the effect on performance.
3. Comparing Bucket Sort with other algorithms like **Quick Sort** or **Merge Sort**.

---

## **Resources**
- [GeeksforGeeks - Bucket Sort](https://www.geeksforgeeks.org/bucket-sort/)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Python Documentation](https://docs.python.org/3/tutorial/datastructures.html)
- [C Programming Documentation](https://en.cppreference.com/w/c)

---

## **Conclusion**

This README provides an introduction to **Bucket Sort** and a detailed guide for implementing the algorithm in **C++**, **C**, and **Python**. By following the pseudocode and structure provided, you’ll be able to build a robust implementation of Bucket Sort and apply it to various datasets.