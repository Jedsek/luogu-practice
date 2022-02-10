#include <iostream>
using namespace std;
int n,m,fa[1005],ans;
int find(int x){
    return fa[x]==x?x:(fa[x] = find(fa[x]));
}
void connect(int x,int y){
    int f1 = find(x),f2 = find(y);
    if(f1!=f2) fa[f1] = f2;
}
int main(){
    int x,y,i;
    while(cin>>n>>m){
        ans = 0;
        for(i = 1;i<=n;i++) fa[i] = i;
        for(i = 1;i<=m;i++){
            cin>>x>>y;
            connect(x,y);
        }
        for(i = 1;i<=n;i++)
            if(find(i)==i) ans++;
        cout<<((ans==0)?ans:(ans-1))<<endl;
    }
    //system("pause");
    return 0;
}
