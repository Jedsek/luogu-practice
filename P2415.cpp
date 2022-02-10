#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int Set[100],cnt;
long long int ans;
long long int sum;
int main(){
    while(cin>>Set[cnt])cnt++,sum+=Set[cnt-1];
    ans=sum*pow(2,cnt-1);
    cout<<ans;
    return 0;
}
