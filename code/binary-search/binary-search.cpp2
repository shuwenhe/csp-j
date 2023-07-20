#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// & 引用
int binarySearch(vector<int>& nums,int target){
	int mid;
	int left = 0,right = nums.size()-1;

	mid = left+(right - left)/2; // mid = (l+r)/2

	if(nums[mid] == target){
		return mid;
	}else if(nums[mid] < target){
		left = mid + 1;
	}else{
		right = mid - 1;
	}
	return -1;
}

int main(){
	ifstream fin("binary.in");
	ofstream fout("binary.out");
	vector<int> nums = {1,3,5,7,9,11,13,15};
	int target;
	fin>>target;
	fout<<binarySearch(nums,target)<<endl;
	return 0;
}
