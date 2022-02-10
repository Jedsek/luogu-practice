#include <iostream>
#include <algorithm>
using namespace std;
int fa[2][10005];
int find(int& x,int t){
    return fa[t][x]==x?x:(fa[t][x] = find(fa[t][x],t));
}
void connect(int& x,int& y,int t){
    int fx = find(x,t),fy = find(y,t);
    fa[t][fx] = fy;
}
int main(){
    int n,m,p,q,x,y,sum1 = 0,sum2 = 0;
    cin>>n>>m>>p>>q;
    for(int i = 1;i<=n;i++) fa[0][i] = i;
    for(int i = 1;i<=m;i++) fa[1][i] = i;
    for(int i = 1;i<=p;i++){
        cin>>x>>y;
        connect(x,y,0);
    }
     for(int i = 1;i<=q;i++){
        cin>>x>>y;
        x *= -1,y *= -1;
        connect(x,y,1);
    }
    for(int i = 1;i<=n;i++) if(find(i,0) == find(x = 1,0)) sum1++;
    for(int i = 1;i<=m;i++) if(find(i,1) == find(x = 1,1)) sum2++;
    cout<<min(sum1,sum2);
    //system("pause");
    return 0;
}
