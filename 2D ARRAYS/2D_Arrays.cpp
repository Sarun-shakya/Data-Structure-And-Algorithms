// 2D arrys

#include<iostream>
using namespace std;

int main(){
	int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int rows = 4;
	int cols = 3;
	int i,j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
