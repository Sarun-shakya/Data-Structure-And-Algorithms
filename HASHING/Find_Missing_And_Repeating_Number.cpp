// Find Repeating and Missing Number

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findRepeatAndMissing(vector<vector<int>>grid,int n){
	unordered_set<int> s;
	int a; // repeating number
	int b; // missing number
	int expectedSum = (n*n)*(n*n + 1)/2;
	int actualSum = 0;
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			actualSum += grid[i][j];
			if(s.find(grid[i][j]) != s.end()){
				a = grid[i][j];
			}
			s.insert(grid[i][j]);
		}
	}
	b = expectedSum + a - actualSum;
	return {a,b};
}

int main(){
	vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
	int n = grid.size();
	vector<int> ans = findRepeatAndMissing(grid,n);
	int i;
	for(i = 0; i < 2; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
