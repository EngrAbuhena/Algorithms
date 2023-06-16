/**
 * @author Abuhena Rony
 */
public class BinarySearchRecursion {
    // binary search function
    public static int binarySearch(int[] arr, int num, int left, int right) {
        // calculating middle point
        int mid = (left + right) / 2;

        // checking if the number is equal to the middle then stop recursion
        if (num == arr[mid])
            return mid;

            // checking if the number is less than the middle then change the right
        else if (num < arr[mid])
            return binarySearch(arr, num, left, mid - 1);

            // checking if the number is greater than the middle then change the left
        else if (num > arr[mid])
            return binarySearch(arr, num, mid + 1, right);

        else
            return 0;
    }

    public static void main(String[] args) {
        // This is our sorted array
        int[] arr = {5, 9, 17, 23, 25, 45, 59, 63, 65, 87};

        // The number need to search
        int num = 59;

        // length of the array
        int len = arr.length;

        // catching the return value from the function
        int result = binarySearch(arr, num, 0, len - 1);

        // printing out the result
        System.out.println("The searched number is at position: " + result);
    }
}
