#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
char ans[1000];
bool isprime(int x){
    int w = sqrt(x);
    for(int i = 2;i<=w;i++){
        if(x%i==0)return false;
    }
    return true;
}

int main(){
    cin>>n;
    for(int i = 4;i<=n;i+=2){
        for(int j = 2;j<=i;j++){
            if(isprime(j)&&isprime(i-j)){
                sprintf(ans,"%d=%d+%d",i,j,i-j);
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}
