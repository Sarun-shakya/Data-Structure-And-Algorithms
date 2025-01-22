// GCD (Greatest Common Divisor) and LCM (Lowest Common Multiple) of a number 

#include<iostream>
using namespace std;

int GCD(int a, int b){
	while(a > 0 && b > 0){
		if(a > b){
			a = a % b;
		} else{
			b = b % a;
		}
	}
	if (a == 0) return b;
	return a;
}

int LCM(int a, int b){
	int gcd = GCD(a,b);
	return (a*b)/gcd;
}

int main(){
	int a = 20, b = 28;
	cout << "GCD of " << a << " and " << b << " is " << GCD(a,b) << endl;
	cout << "LCM of " << a << " and " << b << " is " << LCM(a,b) << endl;
	return 0;
}
