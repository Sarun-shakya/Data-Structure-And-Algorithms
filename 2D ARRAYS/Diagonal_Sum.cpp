//Diagonal Sum

#include<iostream>
using namespace std;

int diagonalSum(int matrix[][3], int n){
	int sum = 0;
	int i ,j;
	for(i = 0; i < n; i++){
		sum += matrix[i][i];
		if(i != n-i-1){
			sum += matrix[i][n-i-1];
		}
	}
	return sum;
}

int main(){
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int n = 3;
	cout << diagonalSum(matrix, n) << endl;
	return 0;
}
