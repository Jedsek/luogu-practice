#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;
int n;
long long s[15],b[15];
int ans;
void dfs(int x,int cj,int sum){
    if(x>n){
    if(cj==1&&sum==0)return;
        ans = min(ans,abs(cj-sum));
        return;
    }
    dfs(x+1,cj*s[x],sum+b[x]);
    dfs(x+1,cj,sum);
}
int main(){
    cin>>n;
    ans = 0x7fffffff;
    for(int i = 1;i<=n;i++){
        cin>>s[i]>>b[i];
    }
    dfs(1,1,0);
    cout<<ans;
    return 0;
}
