// Maximum Row Sum

#include<iostream>
using namespace std;

int maxRowSum(int matrix[][3], int rows, int cols){
	int i,j;
	int maxSum = INT_MIN;
	for(i = 0; i < rows; i++){
		int currSum = 0;
		for(j = 0; j < cols; j++){
			currSum += matrix[i][j];
		}
		maxSum = max(maxSum, currSum);
	}
	return maxSum;
}
int main(){
	int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int rows = 4;
	int cols = 3;
	cout << maxRowSum(matrix,rows,cols) << endl;
	return 0;
}
