#include <iostream>
using namespace std;
int fa[10005];
int find(int& x){
    return fa[x]==x?x:(fa[x] = find(fa[x]));
}
void connect(int& x,int& y){
    int fx = find(x),fy = find(y);
    fa[fx] = fy;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=n;i++) fa[i] = i;
    for(int i = 1,opt,x,y;i<=m;i++){
        cin>>opt>>x>>y;
        if(opt==1){
            connect(x,y);
        }else{
            if(find(x)!=find(y)) cout<<"N"<<endl;
            else cout<<"Y"<<endl;
        }
    }
    //system("pause");
    return 0;
}
