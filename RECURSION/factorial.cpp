//WAp to calculate a factorial of a number using recursion

#include<iostream>
using namespace std;

int fact(int n){
	if(n == 0){ // base case
		return 1;
	}
	return n * fact(n - 1);
}

int main(){
	int num = 5;
	cout << "The factorial of " << num << " is " <<fact(num) << endl;
	return 0;
}
