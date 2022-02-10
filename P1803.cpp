#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    int l,r;
}node[1000005];
bool cmp(Node a,Node b){
    return a.r<b.r;
}
int main(){
    int n,ans = 0;
    cin>>n;
    for(int i = 0;i<n;i++)cin>>node[i].l>>node[i].r;
    sort(node,node+n,cmp);
    for(int i = 0,finish = 0;i<n;i++){
        if(finish<=node[i].l)
            ans++,finish = node[i].r;
    }
    cout<<ans;
    return 0;
}
