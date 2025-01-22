// WAP to print the numbers from N to 1 using recursion

#include<iostream>
using namespace std;

void printNums(int n){ //Recursive function
	if(n == 1){ // base case
		cout << "1";
		return;
	}
	cout << n << " ";
	printNums(n - 1);
}

int main(){
	int num = 10;
	printNums(num);
	return 0;
}
