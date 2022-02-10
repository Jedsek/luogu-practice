#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 10005;
vector<int> p[maxn];
int len[maxn],vis[maxn];
int dfs(int x){
    if(vis[x]) return vis[x];
    for(int i = 0;i<p[x].size();i++){
        vis[x] = max(vis[x],dfs(p[x][i]));
    }
    return vis[x]+=len[x];
}
int main(){
    int n;
    cin>>n;
    for(int i = 1,v,u;i<=n;i++){
        cin>>u>>len[u];
        while(cin>>v&&v){
            p[u].push_back(v);
        }
    }
    int ans = 0;
    for(int i = 1;i<=n;i++){
        ans = max(ans,dfs(i));
    }
    cout<<ans;
    //system("pause");
    return 0;
}
