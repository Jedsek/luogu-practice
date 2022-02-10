#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int nums[30][30];
int main(){
    int n;
    cin>>n;
    nums[1][1] = 1;
    for(int i = 2;i<=n;i++){
        for(int j = 1;j<=n;j++){
            nums[i][j] = nums[i-1][j]+nums[i-1][j-1];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<nums[i][j]<<(j==i?"\n":" ");
        }
    }
    return 0;
}
