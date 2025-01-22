#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWords(string str) {
    int n = str.length();
    reverse(str.begin(), str.end());  // Reverse the entire string

    string ans = "";
    int i = 0;
    while (i < n) {
        while (i < n && str[i] == ' ')  // Skip spaces
            i++;
        
        string word = "";
        while (i < n && str[i] != ' ') {  // Collect characters of the word
            word += str[i];
            i++;
        }
        
        reverse(word.begin(), word.end());  // Reverse each word back to normal
        if (!word.empty()) {
            if (!ans.empty())
                ans += " ";
            ans += word;
        }
    }
    return ans;
}

int main() {
    string str = "the sky is blue";
    cout << reverseWords(str) << endl;  // Output: "blue is sky the"
    return 0;
}

