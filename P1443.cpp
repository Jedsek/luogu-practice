#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int n,m,wx,wy,ans[405][405];
int d[8][2] = {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
struct node{int x,y;};
queue<node> que;
void bfs(int wx,int wy){
    node t = {wx,wy};
    que.push(t);
    while(!que.empty()){
        node u = que.front();
        que.pop();
        for(int i = 0;i<8;i++){
            int ux = u.x+d[i][0],uy = u.y+d[i][1];
            if(ux<1||ux>n||uy<1||uy>m||ans[ux][uy]!=-1)continue;
            int time = ans[u.x][u.y];
            ans[ux][uy] = time+1;
            node tmp = {ux,uy};
            que.push(tmp);
        }
    }
}
int main(){
    cin>>n>>m>>wx>>wy;
    memset(ans,-1,sizeof(ans));
    ans[wx][wy] = 0;
    bfs(wx,wy);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            printf("%-5d",ans[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
