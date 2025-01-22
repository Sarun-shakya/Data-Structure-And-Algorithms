//selection sorting

#include<iostream>
using namespace std;

void swapVal(int *a, int *b){
	int temp =  *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n){
	int i,j;
	for(i = 0; i < n-1; i++){
		int smallestIdx = i;
		for(j = i+1; j < n; j++){
			if(arr[j] < arr[smallestIdx]){
				smallestIdx = j;
			}
		}
		swapVal(&arr[i], &arr[smallestIdx]);
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
	selectionSort(arr, n);
	printArray(arr,n);
	return 0;
}
