#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
int a[250000];
int fa[250000];
int find(int x){
    return fa[x]==x?x:(fa[x] = find(fa[x]));
}
void connect(int x,int y){
    int fx = find(x),fy = find(y);
    fa[fx] = fy;
}
int ans;
int main(){
    cin>>n;
    for(int i = 1;i<=3*n;i++)
        fa[i] = i;
    cin>>k;
    int opt,x,y;
    while(k--){
        cin>>opt>>x>>y;
        if(x>n||y>n){
            ans++;
            continue;
        }
        if(opt==1){
            if(find(x+n)==find(y)||find(x+2*n)==find(y)){
                ans++;
                continue;
            }
            connect(x,y);
            connect(x+n,y+n);
            connect(x+2*n,y+2*n);
        }else{
            if(x==y||find(x)==find(y)||find(x+2*n)==find(y)){
                ans++;  
                continue;
            }
            connect(x,y+2*n);
            connect(x+n,y);
            connect(x+2*n,y+n);
            
        }
    }
    cout<<ans;
    system("pause");
    return 0;
}
