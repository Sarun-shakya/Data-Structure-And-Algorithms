// digits in a number

#include<iostream>
using namespace std;

void countOfDigits(int n){
	int count = 0;
	int rem;
	while(n != 0){
		rem = n % 10;
		n = n / 10;
		count++;
	}
	cout << "The count of the digits is " << count << endl;
}

void sumOfDigits(int n){
	int sum = 0;
	int rem;
	while(n != 0){
		rem = n % 10;
		sum += rem;
		n = n / 10;
	}
	cout << "Sum is " << sum << endl;
}

void printDigits(int n){
	int digit;
	cout <<"Digits in a number are " << endl;
	while(n != 0){
		digit = n % 10;
		n = n / 10;
		cout << digit << endl;
	}
}

int main(){
	int n = 1234;
	printDigits(n);
	sumOfDigits(n);
	countOfDigits(n);
//	cout << "Count of digits using shortcut is " << (log10(n)+1) << endl;
	return 0;	
}
