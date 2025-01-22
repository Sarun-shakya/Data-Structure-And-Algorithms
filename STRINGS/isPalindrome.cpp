// check a string is a palindrome or not

#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch){
	if((ch >= '0' && ch <= '9')  || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
		return true;
	}
	return false;
}

bool isPalindrome(string str, int n){
	int st = 0, end = n-1;
	while(end > st){
		if(!isAlphaNum(str[st])){
			st++;
			continue;
		} 
		if(!isAlphaNum(str[end])){
			end--;
			continue;
		}
		if(tolower(str[st]) != tolower(str[end])){
			return false;
		}
		st++;
		end--;
	}
	return true;
}

int main(){
	string str = "Ac3e3c&a";
	int n = str.length();
	if(isPalindrome(str,n) == true){
		cout << str << " is a palindrome string."<< endl;
	} else{
		cout << str << " is not a palindrome string."<< endl;
	}
	return 0;
}
