#include<iostream>
#include<algorithm>
using namespace std;
int ans;
int main(){
    int n,x;
    cin>>n>>x;
    for(int i = 1,now;i<=n;i++){
        now = i;
        while(now){
            if(x==now%10) ans++;
            now/=10;
        }
    }
    cout<<ans;
   return 0;
}
