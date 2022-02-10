#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int minn = 0x3f3f3f3f,n,m,nums[3005],sum1 = 0;
    cin>>n>>m;
    
    for(int i = 1;i<=n;i++)
        cin>>nums[i];
    for(int i = 1;i<=m;i++)
        sum1+=nums[i];
    for(int i = 1;i<=n-m+1;i++){
        minn = min(minn,sum1);
        sum1 = sum1-nums[i]+nums[i+m];
    }
    cout<<minn;
    return 0;
}
