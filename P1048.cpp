#include <iostream>
#include <algorithm>
using namespace std;
int dp[105][1005];
int w[105],p[105];
int main(){
    int t,m;
    cin>>t>>m;
    for(int i = 1;i<=m;i++){
        cin>>w[i]>>p[i];
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=t;j++){
            if(j-w[i]>=0)
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[m][t];
    //system("pause");
    return 0;
}
