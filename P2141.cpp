#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int ans = 0,n,nums[105],vis[105] = {0};
    cin>>n;
    for(int i = 1;i<=n;i++)
        cin>>nums[i];
    for(int i = 1;i<=n-1;i++)
        for(int j = i+1;j<=n;j++)
            for(int k = 1;k<=n;k++)
                if(nums[i]+nums[j]==nums[k]&&!vis[k]){
                    ans++;
                    vis[k] = 1;
                }
    cout<<ans;
    return 0;
}
