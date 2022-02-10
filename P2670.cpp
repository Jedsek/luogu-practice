#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n,m;
char nums[105][105];
int dx[10] = {0,0,-1,1,-1,1,1,-1};
int dy[10] = {1,-1,0,0,1,1,-1,-1};
int main(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>nums[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(nums[i][j]=='?'){
                int cnt = 0;
                int ux,uy;
                for(int k = 0;k<8;k++){
                    ux = i+dx[k],uy = j+dy[k];
                    if(nums[ux][uy]=='*') cnt++;
                }
                cout<<cnt;
            }else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
    return 0;
}
