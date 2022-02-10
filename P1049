#include <iostream>
#include <algorithm>
using namespace std;
int dp[35][20005],vv[35];
int main(){
    int v,n;
    cin>>v>>n;
    for(int i = 1;i<=n;i++)
        cin>>vv[i];
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=v;j++){
            if(j-vv[i]>=0)
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-vv[i]]+vv[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<v-dp[n][v];
    //system("pause");
    return 0;
}
