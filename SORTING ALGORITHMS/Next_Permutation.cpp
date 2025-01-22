// Next Permutation

#include<iostream>
using namespace std;

void nextPermutation(int arr[], int n){
	int piv = -1,i,ptr1,ptr2;
	//finding pivot element
	for(i = n-2; i >= 0; i--){
		if(arr[i] < arr[i+1]){
			piv = i;
			break;
		}
	}
	if(piv == -1){
		ptr1 = 0, ptr2 = n-1;
		while(ptr2 <= ptr1){
			swap(arr[ptr1], arr[ptr2]);
			ptr1++;
			ptr2--;
		}
	}
	//swapping with the rightMost element
	for(i = n-1; i > piv; i--){
		if(arr[i] > arr[piv]){
			swap(arr[i], arr[piv]);
			break;
		}
	}
	// reverse the remaining rightmost element
	int a = piv+1, b = n-1;
	while(a <= b){
		swap(arr[a], arr[b]);
		a++;
		b--;
	}
}

int main(){
	int arr[] = {1,2,3,5,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	nextPermutation(arr,n);
	//printing ans
	int j;
	for(j = 0; j < n; j++){
		cout << arr[j] << " ";
	}
}
