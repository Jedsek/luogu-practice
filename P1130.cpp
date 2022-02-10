#include <iostream>
#include <algorithm>

using namespace std;
const int maxz = 2004;
int n,m;
int a[maxz][maxz],f[maxz][maxz];
int main(){
    cin>>n>>m;
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            cin>>a[j][i];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            f[i][j] = min(f[i-1][j],j==1?(f[i-1][m]):(f[i-1][j-1]))+a[i][j];
        }
    }
    int ans = 1e9;
    for(int i = 1;i<=m;i++){
        ans = min(f[n][i],ans);
    }
    cout<<ans;
    return 0;
}
