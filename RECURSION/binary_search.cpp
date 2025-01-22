// WAP to demonstrate Binary Search using Recursion

#include<iostream>
using namespace std;

int binSearch(int arr[], int n, int tar, int st, int end){
	if(st <= end){ // base case
		int mid = st + (end - st)/2;
		if(arr[mid] == tar){
			return mid;
		}
		else if(arr[mid] <= tar){
			return binSearch(arr,n,tar,mid + 1,end);
		}
		else{
			return binSearch(arr,n,tar,st,mid - 1);
		}
	}
	return -1;
}

int main(){
	int arr[] = {-1,0,3,5,9,12,14};
	int size = 7;
	int target = 9;
	int st = 0, end = size - 1;
	int ans = binSearch(arr,size,target,st,end);
	if(ans != -1){
		cout << "Target is found in index " << ans;
	} else{
		cout << "Target not found";
	}
	return 0;
}
