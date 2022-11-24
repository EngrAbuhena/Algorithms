//
// Created by Abuhena Rony on 26-Oct-22.
//
#include <bits/stdc++.h>

void selection_sort(long array[], long size) {
    // if the array size is just one, the array is already sorted
    if (size == 1)
        return;

    // Outer loop for iteration
    for (size_t i = 0; i < size - 1; i++) {
        long min_index = i; // initial minimum element

        // find the minimum element from length-1
        for (size_t j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j; // changing the minimum element
            }
        }

        /*Swapping*/
        long temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

int main() {
    // long n = 7;
    // long arr[] = {123, -2, 12, 34, 23, 67, 90};

    long n; // initialize the size of the Array
    printf("Enter the size of the Array: ");
    scanf("%ld", &n); // Taking input the size of the Array

    long arr[1000]; // initialize the Array
    printf("Enter %ld Elements of the Array: ", n);
    for (size_t i = 0; i < n; ++i) {
        scanf("%ld", &arr[i]); // Taking input the Array Elements
    }

    // Sorting the Array by calling the function
    selection_sort(arr, n);

    // Showing the sorted Array
    for (size_t i = 0; i < n; i++) {
        printf("%ld\t", arr[i]);
    }
    return 0;
}
