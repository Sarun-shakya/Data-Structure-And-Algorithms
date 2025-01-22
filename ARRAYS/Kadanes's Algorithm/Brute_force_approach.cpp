//Brute force approach

#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 2, -8, 4, 5};
	int n = 5;
	int maxSum = INT_MIN;
	for(int str = 0; str < n; str++){
		int currSum = 0;
		for(int end = 0; end < n; end++){
			currSum += arr[end];
			maxSum = max(currSum, maxSum);
		}
	}
	cout << "The maximum subarray is " << maxSum << endl;
	return 0;
}
