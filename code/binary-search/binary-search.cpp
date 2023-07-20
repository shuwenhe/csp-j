#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums,int target){
	int left = 0,right = nums.size()-1;
	while(left <= right){
		int mid = left + (right - left)/2;
		if(nums[mid] == target){
			return mid;
		}else if(nums[mid] < target){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	return -1;
}

int main(){	
	ifstream fin("binary.in");
	ofstream fout("binary.out");

	vector<int> nums = {1,3,5,7,9};
	int target;
	fin>>target;

	int n = binarySearch(nums,target);
	fout<<n;
	fin.close();
	fout.close();
	
	return 0;
}
