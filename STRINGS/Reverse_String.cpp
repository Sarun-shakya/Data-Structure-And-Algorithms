// reverse a string

#include<iostream>
using namespace std;

int main(){
	char str[100] = {'a','b','c','d','e'};
	int n = 5;
	int st = 0, end = n-1;
	while(st < end){
		int temp = str[st];
		str[st] =  str[end];
		str[end] = temp;
		st++;
		end--;
	}
	cout << str;
	return 0;
}
