//Product of Array Except Self

#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4};
	int i,j;
	int ans;
	vector<int> ans;
	for(i = 0; i < 4; i++){
		ans = 1;
		for(j = 0; j < 4; j++){
			if(i != j){
				ans *= arr[j];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
