#include <iostream>
#include <algorithm>
using namespace std;
int s[5],a[21],sum,nowtime,maxtime,ans,maxdeep;
void dfs(int x){
    if(x>maxdeep){
        maxtime = max(maxtime,nowtime);
        return;
    }
    if(a[x]+nowtime<=sum/2){
        nowtime+=a[x];
        dfs(x+1);
        nowtime-=a[x];
    }
    dfs(x+1);
}
int main(){
    for(int i = 1;i<5;i++)cin>>s[i];
    for(int i = 1;i<=4;i++){
        nowtime = 0;
        sum = 0;
        maxdeep = s[i];
        for(int j = 1;j<=s[i];j++){
            cin>>a[j];
            sum+=a[j];
        }
        maxtime = 0;
        dfs(1);
        ans+=(sum-maxtime);
    }
    cout<<ans;
    return 0;
}
