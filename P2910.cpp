#include <iostream>
#include <algorithm>
using namespace std;
int n,m,s[105][105];
long long a[10005];
int main(){
    cin>>n>>m;
    for(int i = 1;i<=m;i++)cin>>a[i];
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin>>s[i][j];
    for(int k = 1;k<=n;k++)
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=n;j++)
                s[i][j] = min(s[i][j],s[i][k]+s[k][j]);
    long long ans = 0;
    for(int i = 1;i<m;i++)
        ans+=s[a[i]][a[i+1]];
    cout<<ans;
    //system("pause");
    return 0;
}
