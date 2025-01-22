// WAP to check if array is sorted or not using recursion

#include<iostream>
using namespace std;

int isSorted(int arr[], int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return arr[n-1] >= arr[n-2] && isSorted(arr, n - 1);
}

int main(){
	int arr[] = {1,2,3,4,5};
	int size = 5;
	if(isSorted(arr,size)){
		cout << "The array is sorted" << endl;
	} else{
		cout << "The array is not sorted" << endl;
	}
	return 0;
}
