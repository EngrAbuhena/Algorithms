//
// Created by Abuhena Rony on 26-Oct-22.
//
#include <bits/stdc++.h>

void bubble_sort(long arr[], long size) {
    long temp;
    int flag;
    if (size == 1)
        return;
    for (size_t i = 0; i < size - 1; ++i) {
        flag = 0;
        for (size_t j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                /* Swapping */
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
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
