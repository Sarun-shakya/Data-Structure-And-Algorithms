// Linear Search in 2D arrays

#include<iostream>
using namespace std;

pair<int, int> linearSearch(int mat[][3], int rows, int cols,int target){
	int i,j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			if(mat[i][j] == target){
				return {i,j};
			}
		}
	}
	return {-1,-1};
}

int main(){
	int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int rows = 4;
	int cols = 3;
	int target = 8;
	pair<int, int> result = linearSearch(matrix, rows, cols, target);
    if (result.first != -1) {
        cout << "Target found at: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Target not found" << endl;
    }
	return 0;
}
