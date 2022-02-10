#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int n,first[10005],last[10005];
    memset(first,127,sizeof(first));
    memset(last,127,sizeof(last));
    cin>>n;
    for(int i = 0;i<n;i++)cin>>first[i];
    sort(first,first+n);
    int n2 = 0,i = 0,j = 0,w,sum = 0;
    for(int k = 1;k<n;k++){
        w = first[i]<last[j]?first[i++]:last[j++];
        w += first[i]<last[j]?first[i++]:last[j++];
        last[n2++] = w;
        sum+=w;
    }
    cout<<sum;
    return 0;
}
