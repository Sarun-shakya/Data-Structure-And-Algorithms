//Reverse a Number

#include<iostream>
using namespace std;

int reverseNum(int n){
	int revNum = 0;
	int digit;
	while(n != 0){
		digit = n % 10;
		if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
			return 0;
		}
		revNum = revNum * 10 + digit;
		n = n / 10;
	}
	return revNum;
	
}

int main(){
	int n = 6789;
	cout << "The reversed number of " << n << " is " << reverseNum(n) << endl;
	return 0;
}
