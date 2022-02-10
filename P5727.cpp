#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int nums[1000000];
    int n;
    cin>>n;
    int i = 2;
    nums[1] = n;
    while(n!=1){
        if(n%2==0) {n/=2;nums[i++] = n;}
        else {n = n*3+1;nums[i++] = n;}
    }
    i--;
    while(i>=1){
        cout<<nums[i--]<<" ";
    }
    return 0;
}
