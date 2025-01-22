// rotated sorted array

#include<iostream>
using namespace std;


int rotatedBinarySearch(int arr[], int n, int tar){
	int start = 0, end = n-1, mid;
	while(start <= end){
		mid = start + (end - start)/2;
		if(arr[mid] == tar){
			return mid;
		}
		// check which section is sorted
		if(arr[start] <= arr[mid]){ // right sorted
			if(arr[start] <= tar && arr[mid] >= tar){
				end = mid - 1;
			} else{
				start = mid+1;
			}
		}
		else{ // left sorted
			if(arr[mid] <= tar && arr[end] >= tar){
				start = mid + 1;
			} else{
				end = mid - 1;
			}
		}
	}
}
int main(){
	int arr[] = {3,4,5,6,7,0,1,2};
	int target = 2;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "Target is found in index " << rotatedBinarySearch(arr,size, target) << endl;
}
