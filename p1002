#include <iostream>
using namespace std;
int n,m,x,y;
const int maxn = 30;
long long f[maxn][maxn];
int ctrl[maxn][maxn];
int d[9][2] = { {0,0},{-2,1,},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1} };
bool check(int x,int y){
    if(x<0||y<0||x>n||y>m)return false;
    return true;
}
int main(){
    cin>>n>>m>>x>>y;
    for(int i = 0;i<9;i++){
        int tempx = x+d[i][0],tempy = y+d[i][1];
        if(check(tempx,tempy)) ctrl[tempx][tempy] = 1;
    }
    f[0][0] = 1-ctrl[0][0];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(ctrl[i][j]) continue;
            if(i!=0) f[i][j] += f[i-1][j];
            if(j!=0) f[i][j] += f[i][j-1];
        }
    }
    cout<<f[n][m];
    return 0;
}
