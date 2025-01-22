// single element in a sorted array

#include<iostream>
using namespace std;

int singleElement(int arr[], int n){
	int start = 0, end = n - 1,mid;
	if(n == 1){
		return arr[0];
	}
	while(start <= end){
		mid = start + (end - start)/2;
		//edge cases
		if(mid == 0 && arr[0] != arr[1]){
			return arr[0];
		}
		if(mid == n - 1 && arr[n - 2] != arr[n-1]){
			return arr[n-1];
		}
		//actual condition
		if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
			return arr[mid];
		}
		if(mid % 2 == 0){ // even elements in both halfs
			if(arr[mid] == arr[mid - 1]){
				end = mid - 1;
			} else{
				start = mid + 1;
			}
		}
		else{ // even elements in both halfs
			if(arr[mid] == arr[mid - 1]){
				start = mid + 1;
			} else{
				end = mid - 1;
			}
		}
	}
	return -1;
}

int main(){
	int arr[] = {3,3,7,7,10,11,11};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "The single element is " << singleElement(arr, size) << endl;
	return 0;
}
