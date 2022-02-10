#include <iostream> 
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
#define _for(i,a,b) for(int i = (a);i<=(b);i++)
const int INF = 0x3f3f3f;
int nums[305][305];
bool vis[305][305];
int m;
int dx[5] = {0,1,-1,0,0};
int dy[5] = {0,0,0,1,-1};
bool check(const int &x,const int &y){
    if(x<0||y<0||x>301||y>301) return false;
    return true;
}
struct node{
    int x,y,time;
};
queue<node> que;
void bfs(){
    node e = {0,0,0};
    que.push(e);
    while(!que.empty()){
        node t = que.front();
        que.pop();
        if(nums[t.x][t.y]==INF){
            cout<<t.time;
            return;
        }
        _for(j,0,4){
            if(!check(t.x+dx[j],t.y+dy[j])) continue;
            if(vis[t.x+dx[j]][t.y+dy[j]])continue;
            if(nums[t.x+dx[j]][t.y+dy[j]]>t.time+1){
                e = {t.x+dx[j],t.y+dy[j],t.time+1};
                que.push(e);
                vis[t.x+dx[j]][t.y+dy[j]]=true;
            }
        }
    }
    cout<<-1;
}
int main(){
    cin>>m;
    _for(i,0,304){
        _for(j,0,304){
            nums[i][j]=INF;
        }
    }
    int x,y,t;
    _for(i,1,m){
        cin>>x>>y>>t;
        _for(j,0,4){
            if(!check(x+dx[j],y+dy[j])) continue;
            if(nums[x+dx[j]][y+dy[j]]>t){
                nums[x+dx[j]][y+dy[j]]=t;
            }
        }
    }
    bfs();
    return 0;
}
