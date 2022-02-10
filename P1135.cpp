#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
struct node{
    int c,t;
    
};
int n,a,b,arr[300],vis[300];
using namespace std;
int main(){
    
    
    cin>>n>>a>>b;
    for(int i = 1;i<=n;i++)cin>>arr[i];
    queue<node> que;
    que.push(node{a,0});
    vis[a]=1;
    node tmp;
    while(!que.empty()){
        tmp = que.front();
        que.pop();
        if(tmp.c==b)break;
        for(int sign = -1;sign<=1;sign +=2){
            int dist = tmp.c+arr[tmp.c]*sign;
            if(dist<1||dist>n||vis[dist]!=0)
                continue;
            que.push(node{dist,tmp.t+1});
            vis[dist] = 1;
        }
    }
    if(tmp.c==b)cout<<tmp.t;
    else cout<<-1;
    return 0;
}
