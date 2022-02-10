#include <iostream> 
using namespace std;
struct node{
    int key,pre,next;
    node(int _key = 0,int _pre = 0,int _next = 0){
        key = _key,pre = _pre,next = _next;
    }
};
node s[100005];
int vis[100005];
int tot = 0;
int find(int x){
    int now = 1;
    while(now&&s[now].key!=x)now = s[now].next;
    return now;
}
void ins_back(int x,int y){
    int now = vis[x];
    s[++tot] = node{y,now,s[now].next};
    s[s[now].next].pre = tot;
    s[now].next = tot;
    vis[y] = tot;
}
void ins_front(int x,int y){
    int now = vis[x];
    s[++tot] = node{y,s[now].pre,now};
    s[s[now].pre].next = tot;
    s[now].pre = tot;
    vis[y]=tot;
}
int ask_front(int x){
    int now = find(x);
    return s[s[now].pre].key;
}
int ask_back(int x){
    int now = find(x);
    return s[s[now].next].key;
}
void del(int x){
    int now = vis[x];
    s[s[now].pre].next = s[now].next;
    s[s[now].next].pre = s[now].pre;
    vis[x] = 0;
}
int main(){
    ins_back(0,1);
    int n,m,k,p;
    cin>>n;
    for(int i = 2;i<=n;i++){
        cin>>k>>p;
        if(!p)
            ins_front(k,i);
        else
            ins_back(k,i);
    }
    cin>>m;
    while(m--){
        cin>>k;
        if(vis[k])del(k);
    }
    int nnow = s[0].next;
    while(nnow){
        cout<<s[nnow].key<<' ';
        nnow = s[nnow].next;
    }cout<<endl;
    return 0;
}
