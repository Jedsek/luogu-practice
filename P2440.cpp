#include <iostream>
#include <algorithm>
using namespace std;
int n,k,arr[100005];
bool P(int x){
    long long tot = 0;
    for(int i = 0;i<n;i++)
        tot+=arr[i]/x;
    return tot>=k;
}
int main(){
    cin>>n>>k;
    for(int i = 0;i<n;i++)cin>>arr[i];
    int l = 1,r = 1e9,ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(P(mid))
            ans = mid,l = mid+1;
        else
            r = mid-1;
    }
    cout<<ans;
    return 0;
}
