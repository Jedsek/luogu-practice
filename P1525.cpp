#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int a,b,v;
}t[100005];
int fa[40005];
bool cmp(node a,node b){
    return a.v>b.v;
}

int find(int x){
    return fa[x]==x?x:(fa[x] = find(fa[x]));
}
void connect(int x,int y){
    int fx = find(x),fy = find(y);
    if(fx!=fy)
        fa[fx] = fy;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=m;i++){
        cin>>t[i].a>>t[i].b>>t[i].v;
    }
    for(int i = 1,sz = 2*n;i<=sz;i++)
        fa[i] = i;
    sort(t+1,t+1+m,cmp);
    for(int i = 1;i<=m;i++){
        int x = find(t[i].a),y = find(t[i].b);
        if(x==y){
            cout<<t[i].v;
            //system("pause");
            return 0;
        }
        connect(t[i].a,t[i].b+n);
        connect(t[i].b,t[i].a+n);
    }
    cout<<0;
    //system("pause");
    return 0;
}
