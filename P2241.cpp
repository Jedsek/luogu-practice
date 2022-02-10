#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n,m;
    unsigned long long ans1 = 0,ans2=0;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            ans1+=min(n-i,m-j);
        }
    }
    ans2 = (n*(1+n)*(1+m)*m)/4-ans1;
    cout<<ans1<<' '<<ans2;
    return 0;
}
