#include <iostream>
#include <algorithm>
using namespace std;
int l,n,m,arr[50005];
bool P(int x){
    int cnt = 0,now = 0;
    for(int i = 1;i<=n;i++)
        if(arr[i]-now>=x)
            now = arr[i];
        else
            cnt++;
    return cnt<=m;           
}
int main(){
    cin>>l>>n>>m;
    for(int i = 1;i<=n;i++)cin>>arr[i];
    long long L = 0,r = l,ans;
    while(L<=r){
        int mid = (r-L)/2+L;
        if(P(mid))
            ans = mid,L = mid+1;
        else 
            r = mid-1;
    }
    cout<<ans;
    return 0;
}
