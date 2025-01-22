// insertion sort

//selection sorting

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
	int i;
	for(i = 1; i < n; i++){
		int curr = arr[i];
		int prev = i-1;
		while(prev >= 0 && arr[prev] > curr){
			arr[prev+1] = arr[prev];
			prev--;
		}
		arr[prev+1] = curr; //placing the element in correct place
	}
}

void printArray(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[] = {4,1,5,2,3};
	int n = 5;
	insertionSort(arr, n);
	printArray(arr,n);
	return 0;
}
