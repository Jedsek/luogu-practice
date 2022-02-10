#include <iostream>
#include <vector>
using namespace std;
const int maxn = 100005;
vector<int> p[maxn];
int a[maxn];
void solve(int v,int u){
    a[v] = u;
    for(int j = 0;j<p[v].size();j++){
        if(!a[p[v][j]]) solve(p[v][j],u);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1,u,v;i<=m;i++){
        cin>>u>>v;
        p[v].push_back(u);
    }
    for(int i = n;i>=1;i--){
        if(!a[i])
            solve(i,i);
    }
    for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
    //system("pause");
    return 0;
}
