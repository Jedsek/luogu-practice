#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b,q;
    int ans = 0x3f3f3f3f;
    for(int i = 1;i<=3;i++){
        cin>>b>>q;
        ans = ans>(ceil(n*1.0/b)*q)?(ceil(n*1.0/b)*q):ans;
    }
    cout<<ans;
    return 0;
}
