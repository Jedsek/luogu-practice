#include <iostream>
#include <algorithm>
using namespace std;
int main(){
ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int m;
	cin>>m;
	int nums[5000005];
	for(int i = 0;i<n;i++){
		cin>>nums[i];
	}
	sort(nums,nums+n);
	cout<<nums[m];
	return 0;
} 
