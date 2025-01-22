//majority element brute force

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr = {1,2,2,2,1,3,3,3,3};
	int n = arr.size();
	for(int val : arr){
		int count = 0;
		for(int i: arr){
			if(i == val){
				count++;
			}
		}
		if(count >= n/2){
			cout << "Majority Element is " << val << endl;
			break;
		}
	}
	return 0;
}
