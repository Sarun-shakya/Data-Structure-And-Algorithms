// WAP to calculate sum from N to 1 using recursion

#include<iostream>
using namespace std;

int sumToN(int n){
	if(n == 0){ // base case
		return 0;
	}
	return n + sumToN(n - 1);
}

int main(){
	int num = 5;
	cout << "The sum from " << num << " to 1 is " << sumToN(num) << endl;
	return 0;
}
