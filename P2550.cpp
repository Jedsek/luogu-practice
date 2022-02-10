#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int a[10],in[10],ans[10]={0};
    int n;
    cin>>n;
    for(int i = 1;i<=7;i++)cin>>a[i];
    for(int i = 1;i<=n;i++){
        int t = 0;
        for(int j = 1;j<=7;j++){
            cin>>in[j];
            for(int k = 1;k<=7;k++){
                if(in[j]==a[k])t++;
            }
        }
        ans[t]++;
    }
    for(int i = 7;i>=1;i--) cout<<ans[i]<<(i==1?"\n":" ");
    return 0;
}
