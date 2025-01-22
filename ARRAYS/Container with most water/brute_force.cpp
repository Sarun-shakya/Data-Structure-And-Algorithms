// brute force approach for container with max water
// Time Complexity = O(n2)
#include<iostream>
using namespace std;

int main(){
	int height[] = {1,8,6,2,5,4,8,3,7};
	int N = sizeof(height)/ sizeof(height[0]);
	int i,j,area, maxArea = INT_MIN,minHeight;
	int LeftP = 0,RightP = N-1;
//	for(i = 0; i < N; i++){
//		for(j = i+1; j < N; j++){
//			minHeight = min(height[i], height[j]);
//			area = (j-i)*minHeight;
//			maxArea = max(area, maxArea);
//		}
//	}
	while(LeftP < RightP){
		minHeight = min(height[LeftP], height[RightP]);
		area = (RightP-LeftP)*minHeight;
		maxArea = max(area, maxArea);
		if(height[LeftP] > height[RightP]){
			RightP--;
		} else{
			LeftP++;
		}
	}
	cout <<"the maximum area is " << maxArea << endl;
	return 0;
}
