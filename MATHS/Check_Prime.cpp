// check prime number

#include<iostream>
using namespace std;

bool isPrime(int n){
	int i;
	if(n <= 1){
		return false;
	}
	for(i = 2; i*i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n = 47;
	if(isPrime(n) == true){
		cout << "Prime" << endl;
	}
	else{
		cout << "Non Prime" <<endl;
	}
	return 0;
}
