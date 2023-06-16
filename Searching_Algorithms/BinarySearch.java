public class BinarySearch {
    // Binary Search Function
    static int binarySearch(int arr[], int num, int left, int right) {

        while (left <= right) {

            int mid = (left + right) / 2;

            if (num == arr[mid])
                return mid;

            else if (num < arr[mid])
                right = mid - 1;

            else if (num > arr[mid])
                left = mid + 1;
        }
        // if the number is not present into the array it will return -1
        return -1;

    }

    public static void main(String[] args) {
        // This is our sorted array
        int[] arr = { 5, 9, 17, 23, 25, 45, 59, 63, 65, 87 };

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
