#include <iostream>
#include <algorithm>
using namespace std;
int n,c,arr[1000005];
bool P(int x){
    int cnt = 0,last = -1e9;
    for(int i = 0;i<n;i++){
        if(arr[i]-last>=x)
            last = arr[i],cnt++;
    }
return cnt>=c;
}
int main(){
    cin>>n>>c;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int l = 0,r = 1e9,ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(P(mid))
            ans = mid,l = mid+1;
        else
            r = mid-1;
    }
    cout<<ans;
    
    return 0;
}
