#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int a[100];
bool check(int x){
    if(x==0||x==1)return 0;
    for(int i = 2;i*i<=x;i++)
        if(x%i==0)return false;
    return true;
}
int ans;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    int U = 1<<n;
    for(int S = 0;S<U;S++){
        if(__builtin_popcount(S)==k){
        int sum = 0;
        for(int i = 0;i<n;i++){
            if(S&(1<<i))
                sum+=a[i];
        }
        if(check(sum)) ans++;
        
        }
    }
    cout<<ans;
    return 0;
}
