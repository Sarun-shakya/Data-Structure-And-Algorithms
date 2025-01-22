//find Duplicate number

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n){
	int slow = arr[0], fast = arr[0];
	do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    //reinitialize fast with 0 index
	fast = arr[0];
	
	while(slow != fast){
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}

int main(){
	int arr[] = {3,1,3,4,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The duplicate nuumber is " << findDuplicate(arr,n);
	return 0;
}
