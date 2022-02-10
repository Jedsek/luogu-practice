#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long ll;
const int maxn = 1000005;
ll a[maxn],n,m;
bool P(ll x){
    ll tot = 0;
    for(int i = 0;i<n;i++)
        if(a[i]>x)
            tot+=a[i]-x;
    if(tot>=m)return true;
    return false;
}
int main(){
    cin>>n>>m;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    ll l = 0,r = 1e9,ans = 0;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(P(mid))
            ans = mid,l = mid+1;
        else
            r = mid-1;
    }
    cout<<ans;
    return 0;
}
