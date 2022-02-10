#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n,m,a[25],ans;
void update(int a[],int m){
    int minn = 100,maxn = -100,sum = 0;
    for(int i = 1;i<=m;i++){
        minn = min(minn,a[i]);
        maxn = max(maxn,a[i]);
        sum+=a[i];
    }
    ans = max(ans,sum-minn-maxn);
}
int main(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>a[j];
        }
        update(a,m);
    }
    printf("%.2f",(double)ans/(m-2));
    return 0;
}
