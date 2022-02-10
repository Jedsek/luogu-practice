#include <iostream>
using namespace std;
int n,m,p,fa[5005];
int find(int x){
    if(fa[x] == x) return x;
    return fa[x] = find(fa[x]);
}
void connect(int x,int y){
    int fx = find(x),fy = find(y);
    if(fx!=fy) fa[fx] = fy;
}
int main(){
    cin>>n>>m>>p;
    for(int i = 1;i<=n;i++) fa[i] = i;
    for(int i = 1,x,y;i<=m;i++){
        cin>>x>>y;
        connect(x,y);
    }
    for(int i = 1,x,y;i<=p;i++){
        cin>>x>>y;
        if(find(x)==find(y)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    //system("Pause");
    return 0;
}
