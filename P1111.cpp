#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int a,b,t;
}t[100005];
bool cmp(node a,node b){
    return a.t<b.t;
}
int fa[1005],n,m;
int find(int x){
    return fa[x]==x?x:(fa[x] = find(fa[x]));
}
void connect(int x,int y){
    int fx = find(x),fy = find(y);
    if(fx!=fy) fa[fx] = fy;
}
int number(){
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(find(i) == i)ans++;
    }
    return ans;
}
int main(){
    
    cin>>n>>m;
    //ios::sync_with_stdio(false);
    for(int i = 1;i<=n;i++) fa[i] = i;
    for(int i = 1;i<=m;i++){
        cin>>t[i].a>>t[i].b>>t[i].t;
    }
    sort(t+1,t+1+m,cmp);
    for(int i = 1;i<=m;i++){
        connect(t[i].a,t[i].b);
        if(number()==1){
            cout<<t[i].t;
            //system("pause");
            return 0;
        }
    }
    cout<<-1;
    //system("pause");
    return 0;
}
