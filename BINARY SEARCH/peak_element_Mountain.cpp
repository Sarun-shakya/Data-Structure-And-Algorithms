// Peak element in mountain array

#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
	int start = 1; // index 0 can't be the answer
	int end = n - 2; // n-1 can't be the answer
	int mid;
	while(start <= end){
		mid = start + (end - start)/2;
		if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
			return mid;
		}
		else if(arr[mid - 1] < arr[mid]){ // increasing
			start = mid + 1;
		} else{ // decreasing
			end = mid - 1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {0,3,8,9,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << peakElement(arr,n) << endl;
}
