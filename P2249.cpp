#include <iostream>
#include <algorithm>
using namespace std;
int n,m,arr[1000005];
int find(int x){
    int l = 1,r = n;
    while(l<r){
        int mid = (l+r)/2;
        if(arr[mid]>=x)
            r = mid;
        else
            l = mid+1;
    }
    if(arr[r]==x)return r;
    return -1;
}
int main(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++)cin>>arr[i];
    for(int i = 0,q;i<m;i++){
        cin>>q;
        cout<<find(q)<<' ';
    }
    return 0;
}
