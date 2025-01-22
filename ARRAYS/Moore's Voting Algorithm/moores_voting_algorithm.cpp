// moores's voting algorithm

#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,2,1,1,2,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int freq = 0, ans;
	for(int i = 0; i < n; i++){
		if(freq == 0){
			ans = arr[i];
		}
		if(ans == arr[i]){
			freq++;
		} else{
			freq--;
		}
	}
	cout << "Majority element is " << ans << endl;
}
