// Search in a 2D Matrix II

#include<iostream>
#include<vector>
using namespace std;

bool searchTarget(vector<vector<int>> matrix, int target, int m, int n){
	int row = 0;
	int col = n-1;
	while(row < m && col >= 0){
		if(target == matrix[row][col]){
			return true;
		} else if(target < matrix[row][col]){
			col--;
		} else{
			row++;
		}
	}
	return false;
}

int main(){
	vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
	int target = 5;
	int m = matrix.size();
	int n = matrix[0].size();
	cout << searchTarget(matrix,target,m,n) << endl;
	return 0;
}
