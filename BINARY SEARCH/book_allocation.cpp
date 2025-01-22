// Book allocation problem

#include<iostream>
using namespace std;

bool isValid(int arr[], int n, int m, int allowedPages){
	
	int stu = 1, pages = 0,i;
	for(i = 0; i < n; i++){
		if(arr[i] > allowedPages){
			return false;
		}
		if(pages + arr[i] <= allowedPages){
			pages += arr[i];
		}
		else{
			stu++;
			pages = arr[i];
		}
	}
	if(stu <= m){
		return true;
	}
	else{
		return false;
	}
}

int bookAllocation(int arr[], int n, int m){ // O(logn * n)
	if(m > n){
		return -1;
	}
	int sum = 0,i,ans = -1;
	for(i = 0; i < n; i++){
		sum += arr[i];
	}
	int start = 0, end = sum, mid;
	while(start <= end){// O(logn * n)
		mid = start + (end - start)/2;
		if(isValid(arr, n, m, mid) == true){ //left
			ans = mid;
			end = mid - 1;
		} else{ //right
			start = mid + 1;
		}
	}
	return ans;
}

int main(){
	int arr[] = {2, 1, 3, 4};
	int n = 4; // size
	int m = 2; // students
	cout << "The minimum possible maximum pages is " << bookAllocation(arr,n,m) << endl;
	return 0;
}
