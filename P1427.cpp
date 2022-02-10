#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int nums[100];
    int i = 0;
    while(cin>>nums[i]&&nums[i]!=0) i++;
    while(i--)cout<<nums[i]<<" ";
    return 0;
}
