#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
bool vis[700000];
vector<int> p[700000];
void solve(int x){
    cout<<x<<" ";
    for(int j = 0;j<p[x].size();j++){
        if(!vis[p[x][j]]){
            vis[p[x][j]] = true;
            solve(p[x][j]);
        }
    }
}
int main(){
    
    int n,m;
    cin>>n>>m;
    for(int i = 1,x,y;i<=m;i++){
        cin>>x>>y;
        p[x].push_back(y);
    }
    for(int i = 1;i<=n;i++){
        sort(p[i].begin(),p[i].end());
    }
    //dfs
    vis[1] = true;
    solve(1);
    cout<<endl;

    //memset
    memset(vis,0,sizeof(vis));

    //bfs
    queue<int> que;
    vis[1] = true;
    que.push(1);
    while(!que.empty()){
        cout<<que.front()<<" ";
        int x = que.front();
        que.pop();
        for(int j = 0;j<p[x].size();j++){
            if(!vis[p[x][j]]){
                vis[p[x][j]] = true;    
                que.push(p[x][j]);
            }
        }
    }
    //system("pause");
    return 0;
}
