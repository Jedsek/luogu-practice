#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int ans[1000];
int main(){
    int n,m;cin>>n>>m;
    for(int i = 1;i<=m;i++) {int temp;cin>>temp;ans[temp]++;}
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=ans[i];j++)cout<<i<<' ';
        
    }
    return 0;
}
