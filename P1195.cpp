#include <iostream>
#include <algorithm>
using namespace std;
int fa[1005],sumk,n,m,k;
struct node{
    int a,b,k;
}t[10005];
bool cmp(node a,node b){
    return a.k<b.k;
}
int find(int& x){
    return fa[x]==x?x:(fa[x] = find(fa[x]));
}
bool connect(int& x,int& y){
    int fx = find(x),fy = find(y);
    if(fx!=fy) {fa[fx] = fy;return 1;}
    return 0;
}
int getnum(){
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(find(i)==i)ans++;
    }
    return ans;
}
int main(){

    cin>>n>>m>>k;
    for(int i = 1;i<=n;i++)fa[i] = i;
    for(int i = 1;i<=m;i++){
        cin>>t[i].a>>t[i].b>>t[i].k;
    }
    sort(t+1,t+1+m,cmp);
    for(int i =1;i<=m;i++){
        if(connect(t[i].a,t[i].b))
        sumk += t[i].k;
        if(getnum()==k){
            cout<<sumk;
            return 0;
        }
    }
    cout<<"No Answer";
    return 0;
}
