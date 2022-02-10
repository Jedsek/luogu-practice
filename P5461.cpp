#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int nums[1050][1050],n;
void solve(int x,int y,int n){
    if(n==0) nums[x][y] = 1;
    else{
        solve(x+(1<<(n-1)),y,n-1);//right and up
        solve(x,y+(1<<(n-1)),n-1);//left and down
        solve(x+(1<<(n-1)),y+(1<<(n-1)),n-1);//right ans down
    }
}
void putit(){
    for(int i = 0;i<1<<n;i++){
        for(int j = 0;j<1<<n;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>n;
    solve(0,0,n);
    putit();
    return 0;
}
