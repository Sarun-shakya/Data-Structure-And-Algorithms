// Search in 2D Matrix

#include<iostream>
#include<vector>
using namespace std;

bool searchTarget(vector<vector<int>> matrix, int target, int n, int row){
	int start = 0, end = n-1;
	int mid;
	while(start <= end){
		mid = start + (end - start)/2;
		if(target == matrix[row][mid]){
			return true;
		} else if(target > matrix[row][mid]){
			start = mid + 1;
		} else{
			end = mid - 1;
		}
	}
	return false;
}

bool searchMatrix(vector<vector<int>> matrix, int target, int m , int n){
	int startRow = 0;
	int endRow = m-1;
	int midRow;
	while(startRow <= endRow){
		midRow = startRow + (endRow - startRow)/2;
		if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
			//row found
			return searchTarget(matrix, target, n , midRow);
		} else if(target > matrix[midRow][n-1]){
			startRow = midRow + 1;
		} else {
			endRow = midRow - 1;
		}
	}
	return false;
}

int main(){
	vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,35,60}};
	int m = matrix.size();
	int n = matrix[0].size();
	int target = 35;
	cout << searchMatrix(matrix, target, m ,n) << endl;
	return 0;
}
