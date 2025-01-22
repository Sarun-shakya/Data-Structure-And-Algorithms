//Find Minimum in Rotated Sorted Array

#include<iostream>
using namespace std;

int findMin(int arr[], int n){
	int start = 0, end = n - 1, mid;
	while(start <= end){
		mid = start + (end - start)/2;
		if(mid == 0 && arr[mid] < arr[mid + 1]) return arr[mid];
        if(mid == n - 1 && arr[mid] < arr[mid - 1]) return arr[mid];
		if(arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1]){
			return arr[mid];
		}
		if(arr[mid] > arr[end] ){ // left sorted
			start = mid + 1;
		}
		else{ // right sorted
			end = mid - 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {3,4,5,6,7,8,9,1,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "The minimum element is " << findMin(arr, size) << endl;
	return 0;
}
