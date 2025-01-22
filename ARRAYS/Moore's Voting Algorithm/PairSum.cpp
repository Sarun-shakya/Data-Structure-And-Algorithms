// pair sum

#include<iostream>
using namespace std;

int main(){
	int arr[4] = {2, 7, 11, 15};
	int target = 13;
	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 4; j++){
			if(arr[i] + arr[j] == target){
				cout << " Target is found in index" << i << " and " << j << endl;
			}
		}
	}
	return 0;
}
