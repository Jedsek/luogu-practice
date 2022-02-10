#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int nums[8];
    for(int i = 1;i<=7;i++){
        int x,y;
        cin>>x>>y;
        nums[i]=x+y;
    }
    int maxn = 0;
    int ans;
    for(int i = 1;i<=7;i++){
        if(maxn<nums[i]){maxn = nums[i];ans = i;}
    }
    cout<<ans;
    return 0;
}
