//
// Created by Abuhena Rony on 26-Oct-22.
//
#include <bits/stdc++.h>

void bubble_sort(long arr[], long size);

int main() {
    // Taking input for the size of the Array
    long size;
    printf("Enter the size of the Array: ");
    scanf("%ld", &size);

    // Taking input for the Array Elements
    long arr[1000];
    printf("Enter the %ld Elements of the Array: ", size);
    for (size_t i = 0; i < size; i++) {
        scanf("%ld", &arr[i]);
    }

    // Sorting the by calling the function
    bubble_sort(arr, size);

    // Showing the Sorted Array elements
    printf("Sorted list in ascending order:\n");
    for (size_t k = 0; k < size; ++k) {
        printf("%ld\t", arr[k]);
    }
}

void bubble_sort(long arr[], long size) {
    long temp;
    int flag;
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
