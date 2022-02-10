#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const int MAXN = 1e5+5; 
struct Stud{
    string name;
    int head;
}stud[MAXN];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<n;i++)
        cin>>stud[i].head>>stud[i].name;
    int now = 0;
    for(int i = 0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(stud[now].head == 0&&x == 0)
            now = (now+n-y)%n;
        else if(stud[now].head == 0&&x == 1)
            now = (now+y)%n;
        else if(stud[now].head == 1&&x == 0)
            now = (now+y)%n;
        else if(stud[now].head == 1&&x == 1)
            now = (now+n-y)%n;
    }
    cout<<stud[now].name;
    return 0;
}
