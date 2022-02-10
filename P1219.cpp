#include <iostream>
using namespace std;
int n;
int a[30],b[30],c[30],d[30];
int ans[30];
int total;
void dfs(int i){
    if(i>n){
        total++;
        if(total<=3){
            for(int k = 1;k<=n;k++) cout<<ans[k]+1<<" ";
        cout<<endl;
        }
    }
    for(int j = 0;j<n;j++){
        if(!b[j]&&!c[i+j]&&!d[i-j+n]){
            ans[i] = j;
        
            b[j] = 1;
            c[i+j] = 1;
            d[i-j+n] = 1;
            dfs(i+1);
        
            b[j] = 0;
            c[i+j] = 0;
            d[i-j+n] = 0;
            
        }
    }
    
}
int main(){
    cin>>n;
    dfs(1);
    cout<<total;
    return 0;
}
