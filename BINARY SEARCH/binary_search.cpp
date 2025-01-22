#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int n) {
    int start = 0, end = n - 1, mid;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (target < arr[mid]) {
            end = mid - 1;
        } 
        else if (target > arr[mid]) {
            start = mid + 1;
        } 
        else {
            return mid;  // Target found
        }
    }
    return -1;  // Target not found
}

int main() {
    int arr[] = {-1, 0, 3, 4, 5, 9};
    int target = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, target, size);
    if (result != -1) {
        cout << "Target is found at index " << result << endl;
    } else {
        cout << "Target is not found in the array" << endl;
    }
    return 0;
}

