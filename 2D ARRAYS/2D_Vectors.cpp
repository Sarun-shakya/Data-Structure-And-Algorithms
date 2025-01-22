//2D Vectors

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<vector<int>> matrix = {{1,2,3},{4,5,6,7,10},{8,0,9}};
	int i,j;
	for(i = 0; i < matrix.size(); i++){
		for(j = 0; j < matrix[i].size(); j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
