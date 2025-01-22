//Maximum Column Sum

#include<iostream>
using namespace std;

int maxColSum(int matrix[][3], int rows, int cols){
	int i,j;
	int maxSum = INT_MIN;
	for(i = 0; i < cols; i++){
		int currSum = 0;
		for(j = 0; j < rows; j++){
			currSum += matrix[j][i];
		}
		maxSum = max(maxSum, currSum);
	}
	return maxSum;
}
int main(){
	int matrix[4][3] = {{100,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int rows = 4;
	int cols = 3;
	cout << maxColSum(matrix,rows,cols) << endl;
	return 0;
}
