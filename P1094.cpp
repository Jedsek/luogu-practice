#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int INF = 500;
int ans;
bool vis[30005];
int main(){
	int w;
	int nums[30005];

	int n;
	cin>>w>>n;
	for(int i = 1;i<=n;i++) cin>>nums[i];
	sort(nums+1,nums+1+n);
	for(int i = 1;i<=n;i++){
		int j = n;
		while(i<=j){
			if(i==j&&!vis[i]&&nums[i]<=w){
				ans++;
				vis[i] = true;
				break;
			}
			if(nums[i]+nums[j]<=w&&!vis[i]&&!vis[j]) {
				ans++;
				vis[i] = true;
				vis[j] = true;
				break;
			}
			j--;
		
		}
	}
	cout<<ans;
	return 0;
}
