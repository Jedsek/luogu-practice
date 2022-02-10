#include <iostream>
#include <algorithm>
using namespace std;
int l,n,k,arr[10000005];
bool P(int x){
    int cnt = 0,now = 0;
    for(int i = 1;i<n;i++){
        if(arr[i]-now>x){
            if((arr[i]-now)%x==0)
                cnt+=(arr[i]-now)/x-1;
            else 
                cnt +=(arr[i]-now)/x;
            
        }now=arr[i];
    }
    return cnt<=k;
}
int main(){
    cin>>l>>n>>k;
    for(int i = 0;i<n;i++) cin>>arr[i];
    int L = 0,r = 1e10,ans = 0,mid = 0;
    while(L<=r){
        if( P(mid = L+(r-L)/2) )
            ans = mid,r = mid-1;
        else
            L = mid+1;
    }
    cout<<ans;
    return 0;
}
