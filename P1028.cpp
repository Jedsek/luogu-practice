#include <iostream>
#include <cstring>
using namespace std;
int n,ans,num[1010];
int soi(int x){
    if(num[x]!=-1)return num[x];
    int ans = 1;
    for(int i = 1;i<=x/2;i++)
        ans+=soi(i);
    return num[x] = ans;
}
int main(){
    cin>>n;
    memset(num,-1,sizeof(num));
    ans=soi(n);
    cout<<ans;
    return 0;
}
