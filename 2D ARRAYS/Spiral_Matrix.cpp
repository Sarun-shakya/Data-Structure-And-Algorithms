//Spiral Matrix

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int> > matrix, int m , int n){
	int srow = 0, erow = m-1, scol = 0, ecol = n-1;
	vector<int> ans;
	int i,j;
	while(srow <= erow && scol <= ecol){
		//top
		for(j = scol; j <= ecol; j++){
			ans.push_back(matrix[srow][j]);
		}
		//right
		for(i = srow+1; i <= erow; i++){
			ans.push_back(matrix[i][ecol]);
		}
		//bottom
		for(j = ecol-1; j >= scol; j--){
			if(srow == erow){
				break;
			}
			ans.push_back(matrix[erow][j]);
		}
		//left
		for(i = erow-1; i >= srow+1; i--){
			if(scol == ecol){
				break;
			}
			ans.push_back(matrix[i][scol]);
		}
		srow++; erow--; scol++; ecol--;
	}
	return ans;
}

int main(){
	vector<vector<int> > matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	int m = matrix.size();
	int n = matrix[0].size();
	vector<int> ans = spiralMatrix(matrix,m,n);
	int i;
	for(i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
