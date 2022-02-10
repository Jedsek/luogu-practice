#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n,m,arr[100005];
bool P(ll x){
    ll cnt = 1;
    ll sum = 0;
    for(ll i = 0;i<n;i++){
        if(sum+arr[i]<=x) sum+=arr[i];
        else sum=arr[i],cnt++;
    }
    return cnt<=m;
}
int main(){
    cin>>n>>m;
    ll r = 0,l = 0;
    for(ll i = 0;i<n;i++)
        {cin>>arr[i];l = max(l,arr[i]) ;r+=arr[i];}
    ll mid = 0,ans = 0;
    while(l<=r){
        if(P(mid = l+(r-l)/2))
            ans = mid,r = mid-1;
        else
            l = mid+1;
    }
    cout<<ans;
    return 0;
}
