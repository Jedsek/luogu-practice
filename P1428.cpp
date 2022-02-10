#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int nums[100];
    int n;cin>>n;
    for(int i = 0;i<n;i++)cin>>nums[i];
    for(int i = 0;i<n;i++){
        int ans = 0;
        for(int j = i-1;j>=0;j--){
            if(nums[j]<nums[i]) ans++;
        }
        cout<<ans<<" ";
    }
    return 0;
}
