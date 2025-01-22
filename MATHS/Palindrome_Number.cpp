// Palindrome Number

#include<iostream>
using namespace std;

bool isPalindrome(int n){
	int revNum = 0;
	int orgNum = n;
	while(n != 0){
		int digit = n % 10;
		revNum = revNum * 10 + digit;
		n = n / 10;
	}
	return orgNum == revNum;
}

int main(){
	int n = 3213;
	if(isPalindrome(n)){
		cout << n << " is a palindrome number." << endl;
	} else{
		cout << n << " is not a palindrome number." << endl;
	}
	return 0;
}
