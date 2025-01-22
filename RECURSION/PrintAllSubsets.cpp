// Print all subsets using recursion

#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int> &arr,vector<int> &ans, int i){
	if(i == arr.size()){ // base case
		for(int var : ans){
			cout << var << " ";
		}
		cout << endl;
		return;
	}
	ans.push_back(arr[i]); // include
	printSubsets(arr,ans,i+1);
	ans.pop_back(); // exclude
	printSubsets(arr,ans,i+1);
}

int main(){
	vector<int> arr = {1,2,3};
	vector<int> ans; // store the subsets
	printSubsets(arr, ans, 0);
	return 0;
}
