#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int tree[10005] = {0};
    int l,t;
    int ans = 0;
    cin>>l>>t;
    for(int i = 1,x,y;i<=t;i++){
        cin>>x>>y;
        while(x<=y){
            tree[x++] = 1;
        }
    }
    for(int i = 0;i<=l;i++){if(!tree[i]) ans++;}
    cout<<ans;
    return 0;
}
