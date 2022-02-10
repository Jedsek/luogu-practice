#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1005;
int r;
int a[maxn][maxn],f[maxn][maxn];
int main(){
    cin>>r;
    for(int i = 1;i<=r;i++) {
        for(int j = 1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=i;j++){
            f[i][j] = max(f[i-1][j],f[i-1][j-1])+a[i][j];
        }
    }
    int ans = -1e9;
    for(int i = 1;i<=r;i++){
        ans = max(ans,f[r][i]);
    }
    cout<<ans;
    return 0;
}
