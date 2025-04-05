// permutations using recursion

#include<iostream>
#include<vector>
using namespace std;

void getPerms(vector<int> &arr, int idx, vector<vector<int>> &ans, int n){
	if(idx == n){ // base case
		ans.push_back({arr});
		return;
	}
	
	for(int i = idx; i < n; i++){
		swap(arr[idx], arr[i]); // swap values
		getPerms(arr, idx+1, ans,n); //recursive call
		swap(arr[idx], arr[i]);// backtracking
	}
}

int main(){
	vector<int> arr = {1,2,3};
	vector<vector<int>> ans;
	int n = arr.size();
	getPerms(arr, 0, ans, n);
	int size = ans.size();
	for(int i = 0; i < ans.size(); i++){
		for(int j = 0; j < ans[i].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
