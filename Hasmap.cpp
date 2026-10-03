#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	int nums[] = {4, 2, 3, 2, 4};
	
	unordered_map<int, int> freq;
	
	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++){
		cout << freq[nums[i]]++;
	}
	for ( auto x : freq){
		cout << x.first << x.second << endl;
	}
	return{};
}