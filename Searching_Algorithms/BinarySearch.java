/**
 * @author AbuhenaRony
 * 
 * Binary Search Algorithm
 */
package com.practise.example;

import java.util.Arrays;

public class BinarySearchAlgorithm {
	public static void main(String[] args) {
		int[] arr = new int[1000000];

		// create the sorted array
		for (int i = 0; i < arr.length; i++) {
			arr[i] = i + 1;
		}

		// targeted number
		int numberToFind = 777777;

		// using custom method
		int result = binarySearch(arr, numberToFind); // 777776
		if (result == -1) System.out.println(numberToFind + " not found!");
		else System.out.println(numberToFind + " found at index " + result);

		// built-in method
		int result1 = Arrays.binarySearch(arr, numberToFind); // 777776
		if (result1 < 0) System.out.println(numberToFind + " not found!");
		else System.out.println(numberToFind + " found at index " + result1);
	}

	private static int binarySearch(int[] arr, int numberToFind) {
		int low = 0;
		int high = arr.length - 1;

		while (low <= high) {
			int middleIndex = low + (high - low) / 2;
			// int middleIndex = (low+high)/2;

			int middleNumber = arr[middleIndex];

			// base condition
			if (numberToFind == middleNumber) return middleIndex;

			if (numberToFind < middleNumber) high = middleIndex - 1;
			else low = middleIndex + 1;
		}

		return -1;
	}
}
