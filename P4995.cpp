#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long ans;
int nums[400];
int main(){
	long long n;
	cin>>n;
	
	for(int i = 1;i<=n;i++) cin>>nums[i];
	sort(nums+1,nums+1+n);
	int i = 0,j = n;
	while(i<j){
		ans += pow(nums[j]-nums[i],2);
		i++;
		ans += pow(nums[i]-nums[j],2);
		j--;
	}
	cout<<ans;
	return 0;
} 
