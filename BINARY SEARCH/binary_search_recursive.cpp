#include<iostream>
using namespace std;

int binarySearch(int arr[], int tar, int start, int end){
	if(start <= end){
		int mid = start + (end-start)/2;
		if(tar < arr[mid]){
			return binarySearch(arr,tar, start, mid-1);
		} 
		else if(tar > arr[mid]){
			return binarySearch(arr, tar, mid+1, end);
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main(){
	int arr[] = {-1,0,3,4,5,9};
	int target = 10;
	int size = sizeof(arr)/sizeof(arr[0]);
	int start = 0, end = size-1;
	cout <<"Target is found in " << binarySearch(arr,target, start, end) << " index" << endl;
	return 0;
}
