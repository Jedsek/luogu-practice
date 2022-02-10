#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
bool isprime(int x){
    if(x==0||x==1)return false;
    for(int i = 2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    int n,num;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>num;
        if(isprime(num)) cout<<num<<' ';
    }
    return 0;
}
