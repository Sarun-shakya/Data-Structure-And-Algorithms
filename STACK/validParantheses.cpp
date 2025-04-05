// Valid Parantheses

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(char str[]){
	int i;
	stack <int> st;
	for(i = 0; i < 8; i++){
		if(str[i] == '(' || str[i] == '{' || str[i] == '['){ //opening
			st.push(str[i]);
		}
		else{ // closing
			if(st.size() == 0){ // closing > opening
				return false;
			}
			if((st.top() == '(' && str[i] == ')') ||
			(st.top() == '{' && str[i] == '}') ||
			(st.top() == '[' && str[i] == ']')){
				st.pop();
			} else{
				return false;
			}
		}
	}
	return st.size() == 0; // opening > closing
}

int main(){
	char str[] = "({[]}[])";
	if(isValid(str)){
		cout << "It is a valid parantheses" << endl;
	} else{
		cout << "It is not a valid paranthese" << endl;
	}
	return 0;
}
