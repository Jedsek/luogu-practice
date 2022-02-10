#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int s1,s2,s3,nums[1000]={0},kn_max = -1,ans = 0;
    cin>>s1>>s2>>s3;
    for(int i = 1;i<=s1;i++){
        for(int j = 1;j<=s2;j++){
            for(int k = 1;k<=s3;k++)
                nums[i+j+k]++;
        }
    }
    for(int i = 1;i<=300;i++){
        if(nums[i]>kn_max) {kn_max = nums[i];ans = i;}
    }
    cout<<ans;
    return 0;
}
