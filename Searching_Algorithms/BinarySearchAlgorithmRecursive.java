/**
 * @author AbuhenaRony
 * 
 * Binary Search Algorithm Recursive
 */
package com.practise.example;

import java.util.Arrays;

public class BinarySearchAlgorithmRecursive {
	public static void main(String[] args) {
		int[] arr = new int[1000000];

		// create the sorted array
		for (int i = 0; i < arr.length; i++) {
			arr[i] = i + 1;
		}

		// targeted number
		int numberToFind = 7777777;

		// using custom method
		int result = binarySearch(arr, numberToFind, 0, arr.length-1);
		if (result == -1) System.out.println(numberToFind + " not found!");
		else System.out.println(numberToFind + " found at index " + result);

		// built-in method
		int result1 = Arrays.binarySearch(arr, numberToFind);
		if (result1 < 0) System.out.println(numberToFind + " not found!");
		else System.out.println(numberToFind + " found at index " + result1);
	}

	// recursive method
	private static int binarySearch(int[] arr, int numberToFind, int low, int high) {
		int middleIndex = (low + high)/2;
		int middleNumber = arr[middleIndex];
		
		// base condition
		if(numberToFind==middleNumber) return middleIndex;
		
		if(numberToFind<middleNumber) return binarySearch(arr, numberToFind, low, middleIndex-1);
		else if(numberToFind>middleNumber) return binarySearch(arr, numberToFind, low, middleIndex+1);
		
		// if the number is not found
		else return -1;
	}
}
