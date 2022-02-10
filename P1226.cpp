#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
ll c,p,k;
ll binpow(ll a,ll b){
    if(b==0)
        return 1;
    ll res = binpow(a,b/2)%k;
    if(b%2)
        return res%k*res%k*a%k;
    else
        return res%k*res%k;
}
int main(){
    
    cin>>c>>p>>k;
    printf("%lld^%lld mod %lld=%lld",c,p,k,binpow(c,p)%k);
    return 0;
}
