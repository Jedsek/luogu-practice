#include <iostream>
#include <algorithm>
using namespace std;
int n,m;//num and price_target
int arr[150],ans;
//寻找方案总数，每个数选或不选
//边界:0-->-n-1，到n则为边界
void dfs(int num,int sum){
    
    if(num>n||sum>m)return;
        if(sum==m){
            ans++;
            return;
        
    }
    dfs(num+1,sum+arr[num]);
    dfs(num+1,sum);
}
int main(){
    cin>>n>>m;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    dfs(0,0);
    cout<<ans;
    return 0;
}
