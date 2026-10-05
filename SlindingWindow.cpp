#include <iostream>
using namespace std;
//boilerplate code for the SlidingWindow concept

int main(){
	int windowSum = 0;
	int nums[] = {2, 3, 1, 5, 4};
	int left = 0;
	int right = 0;
	int k = 3;
	int answer = 0;
	
	for(int right = 0; right < sizeof(nums) / sizeof(nums[0]); right++){
		
		windowSum += nums[right];
		
		if (right - left +1 > k){
			windowSum -= nums[left];
			left++;
		}
		if (right - left + 1 == k){
			answer = max(answer, windowSum);
		}
	}
	cout << answer;
	return 0;
}