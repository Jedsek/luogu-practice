#include <iostream>
#include <algorithm>
using namespace std;
int nums[200006];
bool cmp(int a,int b){
	if(a>b)return true;
	return false;
}
int main() {
	int n,m;
	int sum = 0;
	cin>>n>>m;
	for(int i = 1;i<=n;i++) cin>>nums[i];
	sort(nums+1,nums+1+n,cmp);
	for(int i = 1;i<=n;i++){
		sum+=nums[i];
		if(sum>=m) {
			cout<<i;return 0;
		}
	}
	
}
