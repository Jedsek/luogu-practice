#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,arr[10005];
    cin>>n>>m;
    for(int i = 1;i<=n;i++)cin>>arr[i];
    while(m--)
        next_permutation(arr+1,arr+1+n);
    for(int i = 1;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<arr[n];
    return 0;
}
