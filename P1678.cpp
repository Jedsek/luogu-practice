#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100005;
long  long m,n,a[maxn],b[maxn];
long long tot;
int main(){
    cin>>m>>n;
    for(int i = 0;i<m;i++)cin>>a[i];
    for(int i = 0;i<n;i++)cin>>b[i];
    sort(a,a+m);
    for(long long i = 0,l = 0,r = n-1,ans = 0,mid = 0;i<n;i++){
        l = 0,r = m-1,ans = 1e9;
        while(l<=r){
            mid = l+(r-l)/2;
            if(a[mid]==b[i]) {ans = 0;break;}
            if(a[mid]>b[i])
                ans = min(ans,abs(a[mid]-b[i])),r = mid-1;
            else
                ans = min(ans,abs(a[mid]-b[i])),l = mid+1;
        }
        tot+=ans;
    }
    cout<<tot;
    return 0;
}
