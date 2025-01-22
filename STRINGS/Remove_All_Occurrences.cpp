// Remove all Occurrences from a string

#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part){
	while(s.find(part) < s.length() && s.length() > 0){ //s.find() -> returns initial index of part
		s.erase(s.find(part),part.length()); //erases the part from s.find() to part.length()
	}
	return s;
}

int main(){
	string s = "daabcbaabcbc";
	string part = "abc";
	s = removeOccurrences(s,part);
	cout << " after removing all occurrences " << s ;
	return 0;
}

