//string compression

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int stringCompression(vector<char> &chars,int  n){
	int idx = 0;
	int i;
	for( i = 0; i < n; i++){
		int count = 0;
		char ch = chars[i];
		while(i < n && chars[i] == ch){
			count++;
			i++;
		}
		if(count == 1){
			chars[idx++] = ch;
		} else{
			chars[idx++] = ch;
			string str = to_string(count);
			for(char val : str){
				chars[idx++] = val;
			}
		}
		i--;
	}
	chars.resize(idx);
	return idx;
}

int main(){
	vector<char> chars = {'a','a','b','b','c','c','d','e'};
	int n = chars.size();
	cout << "the new array size is " << stringCompression(chars, n) << endl;
	int i;
	for(i = 0; i < chars.size(); i++){
		cout << chars[i] << " ";
	}
	cout << endl;
	return 0;
}
