#include <bits/stdc++.h>

using namespace std;

// our binary searching function
int binarySearch(vector<int> arr, int num, int left, int right) {
    // calculating the middle
    int mid = (left + right) / 2;
    
    // checking if the number is equal with the middle then stop recursion
    if (num == arr.at(mid))
        return mid;
        
        // checking if the number is less than middle then change the right
    else if (num < arr.at(mid))
        return binarySearch(arr, num, left, mid - 1);
        
        // checking if the number is greater than the middle then change the left
    else if (num > arr.at(mid))
        return binarySearch(arr, num, mid + 1, right);
    
    else
        return 0;
}

int main() {
    // This is our sorted array
    vector<int> arr = {5, 9, 17, 23, 25, 45, 59, 63, 65, 87};
    
    // The number need to search
    int num = 59;
    
    // length of the array
    int len = (int) arr.size();
    
    // catching the return value from the function
    int result = binarySearch(arr, num, 0, len - 1);
    
    // printing out the result
    cout << "Searched number is at the position: " << result << endl;
    return 0;
}
