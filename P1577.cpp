#include <iostream>
#include <iomanip>
using namespace std;
int nums[10005];
int n,k;
int ans;
bool check(int mid){
	int count = 0;
	for(int i = 1;i<=n;i++){
		count += (nums[i]/mid);
	}
	if(count>=k) return true;
	return false;
}
int main(){
	
	cin>>n>>k;
	double num;
	for(int i = 1;i<=n;i++){
		
		cin>>num;
		nums[i] = num*100;
	}
	int l = 0,r = 10000000;
	while(l<=r){
		int mid = (l+r)/2;
		if(mid==0) break;
		if(check(mid)) {
			ans = mid;
			l = mid+1;
		}
		else r = mid-1;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<ans/100.0;
	return 0;
} 
