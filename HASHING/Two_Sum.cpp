//Two Sum

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int tar){
	unordered_map<int, int> m;
	int i;
	for(i = 0; i < arr.size(); i++){
		int first = arr[i];
		int sec = tar - first;
		if(m.find(sec) != m.end()){
			return {i, m[sec]};
		}
		m[first] = i;
	}
}

int main(){
	vector<int> arr = {5,2,11,7,15};
	int tar = 9;
	vector<int> ans = twoSum(arr,tar);
	int i;
	for(i = 0; i < 2; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
