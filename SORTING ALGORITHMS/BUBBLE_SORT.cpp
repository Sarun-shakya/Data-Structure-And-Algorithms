// bubble sort

#include<iostream>
using namespace std;

void swapVal(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	int i,j;
	bool isSwap = false;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swapVal(&arr[j], &arr[j+1]);
				isSwap = true;
			}
		}
		if(isSwap == false){ // array is already sorted
			return;
		}
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
	int arr[5] = {4, 1, 5, 2, 3};
	int n = 5;
	bubbleSort(arr,n);
	printArray(arr,n);
	return 0;
}
