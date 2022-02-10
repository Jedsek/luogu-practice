#include <iostream>
using namespace std;
int nums[100005];
int ans;
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>nums[i];
		if(nums[i]>nums[i-1])ans += nums[i]-nums[i-1];
	}
	cout<<ans;
}
