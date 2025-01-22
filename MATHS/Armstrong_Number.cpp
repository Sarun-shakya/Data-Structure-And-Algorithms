//Armstrong Number

#include<iostream>
using namespace std;

bool isArmstrong(int n){
	int orgNum = n;
	int digit;
	int cubeSum = 0;
	while(n != 0){
		digit = n % 10;
		cubeSum += (digit*digit*digit);
		n = n / 10;
	}
	return cubeSum == orgNum;
}

int main(){
	int n = 352;
	if(isArmstrong(n)){
		cout << n << " is an Armstrong number."<< endl;
	} else{
		cout << n << " is not an Armstrong number."<< endl;
	}
	return 0;
}
