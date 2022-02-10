#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;
int n,m,t;
int sx,sy,lx,ly;
int nums[10][10];
bool vis[10][10];
int ans;
int dx[5] = {0,1,-1,0,0};
int dy[5] = {0,0,0,1,-1};
bool check(const int &x,const int &y){
    if(x<1||y<1||x>n||y>m) return false;
    if(vis[x][y]) return false;
    return true;
}
void dfs(int x,int y){
    if(x==lx&&y==ly) {ans++;return;}
    int nx,ny;
    for(int i = 1;i<=4;i++){
        nx = x+dx[i],ny = y+dy[i];
        if(check(nx,ny)){
            vis[x][y] = true;
            dfs(nx,ny);
            vis[x][y] = false;
        }
    }
}
int main(){
    cin>>n>>m>>t;
    cin>>sx>>sy>>lx>>ly;
    for(int i = 1,x,y;i<=t;i++){
        cin>>x>>y;
        vis[x][y] = true;
    }
    dfs(sx,sy);
    cout<<ans;
    return 0;
}
