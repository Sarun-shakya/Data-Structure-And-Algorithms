//Dutch National Flag ALgorithm

#include<iostream>
using namespace std;

void DNFAlgo(int arr[], int n){
	int low = 0, mid = 0, high = n-1;
	while(mid <= high){
		if(arr[mid] == 0){ // case of 0
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		} else if(arr[mid] == 1){ // case of 1
			mid++;
		} else{ // case of 2
			swap(arr[high], arr[mid]);
			high--;
		}
	}
}
int main(){
	int arr[] = {1,2,0,1,1,0,0,1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	DNFAlgo(arr,n);
	int i;
	for(i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
