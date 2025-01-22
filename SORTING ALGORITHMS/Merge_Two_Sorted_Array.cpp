// Merge 2 Sorted Array

#include<iostream>
using namespace std;
void MergeTwoSorted(int arr1[], int arr2[], int n, int m){
	int idx = m+n-1, i = m-1, j = n-1;
	while(j >= 0 && i >= 0){
		if(arr1[i] >= arr2[j]){
			arr1[idx] = arr1[i];
			idx--;
			i--;
		} else {
			arr1[idx] = arr2[j];
			idx--;
			j--;
		} 
	}
	while(j >= 0){
		arr1[idx] = arr2[j];
		idx--;
		j--;
	}
}

int main(){
	int arr1[] = {1,2,3,0,0,0};
	int arr2[] = {2,5,6};
	int m = 3, n = 3;
	MergeTwoSorted( arr1, arr2,  n,  m);
	int k;
	for(k = 0; k < m+n; k++){
		cout << arr1[k] << " ";
	}
	return 0;
}
