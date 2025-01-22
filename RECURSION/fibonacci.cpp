// WAP to generate Fibonacci sequence using recursion

#include<iostream>
using namespace std;

int fibo(int n){
	if(n == 0 || n == 1){
		return n;
	}
	return fibo(n - 1) + fibo(n - 2);
}

int main(){
	int n = 6;
	int i;
	cout << "The fibonacci sequence upto " << n << "th term is ";
	for(i = 0; i < n; i++){
		cout << fibo(i) << " ";
	}
	return 0;
}
