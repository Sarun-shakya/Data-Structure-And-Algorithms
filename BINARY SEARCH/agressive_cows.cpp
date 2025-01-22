// agressive cows problem

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int c, int n, int minPossibleVal){
	int cows = 1,lastStallPos = arr[0];
	for(int i = 0; i < n; i++){
		if((arr[i] - lastStallPos) >= minPossibleVal){
		cows++;
		lastStallPos = arr[i];
		} 
		if(cows == c){
			return true;
		}
	}
}

int getDistance(vector<int> &arr, int c, int n){
	int st, end,i,mid,ans;
	st = 1, end = arr[n-1];
	while(st <= end){
		mid = st + (end - st)/2;
		if(isPossible(arr,c,n,mid) == true){
			st = mid + 1;
			ans = mid;
		} else{
			end = mid - 1;
		}
	}
	return ans;
}

int main(){
	vector<int> arr = {1,2,4,8,9};
	int c = 3;
	int n = 5;
	cout << "The minimum possible largest value is "<< getDistance(arr,c,n) << endl;
}
