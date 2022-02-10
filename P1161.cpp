#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int nums[30][30];
int main(){
    int n,ans = 0;
    cin>>n;
    while(n--){
        double a,t;
        cin>>a>>t;
        for(int i = 1;i<=t;i++)
            ans^=int(a*i);
    }
    cout<<ans;
    return 0;
}
