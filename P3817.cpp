#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n,x,arr[100005],ans = 0;
    cin>>n>>x;
    for(int i = 0;i<n;i++)cin>>arr[i];
    for(int i = 1;i<n;i++){
        int sum = arr[i]+arr[i-1];
        if(sum<x) continue;
        ans+=sum-x;
        arr[i] = arr[i]-(sum-x);
        if(arr[i]<0) 
            arr[i-1]+=arr[i],arr[i] = 0;
    }
    cout<<ans;
    return 0;
}
