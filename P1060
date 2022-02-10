#include <iostream>
#include <algorithm>
using namespace std;
int dp[30][30005];
int v[30],w[30];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=m;i++)
        cin>>v[i]>>w[i];
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(j-v[i]>=0)
                dp[i][j] = max( dp[i-1][j],dp[i-1][j-v[i]]+v[i]*w[i] );
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[m][n];
    //system("pause");
    return 0;   
}
