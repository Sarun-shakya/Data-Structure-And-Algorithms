// 3 SUM

#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(int nums[], int n){
	int i,j,k;
	vector<vector<int>> ans;
	set<vector<int>> s;
	for(i = 0; i < n; i++){
		for(j = i+1; j <n; j++ ){
			for(k = j+1; k < n; k++){
				if(nums[i] + nums[j] + nums[k] == 0){
					vector<int> triplet = {nums[i], nums[j], nums[k]};
					sort(triplet.begin(), triplet.end());
					
					if(s.find(triplet) == s.end()){
						s.insert(triplet);
						ans.push_back(triplet);
					}
				}
			}
		}
	}
	return ans;
} 
int main(){
	int arr[] = {-1,0,1,2,-1,-4};
	int size = sizeof(arr)/sizeof(arr[0]);
 	vector<vector<int>> result = threeSum(arr,size);
 	 for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
	 return 0;
}
