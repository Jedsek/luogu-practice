#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int nums[200][200];
int ans;
int main(){
    int n,m,k,x,y;
    cin>>n>>m>>k;
    for(int i = 1;i<=m;i++){
        cin>>x>>y;
        for(int j = x-1;j<=x+1;j++){
            for(int h = y-1;h<=y+1;h++)
                nums[j][h] = 1;
        }
        for(int j = x-2;j<=x+2;j++) if(j>=1&&j<=n)nums[j][y] = 1;
        for(int j = y-2;j<=y+2;j++) if(j>=1&&j<=n)nums[x][j] = 1;
    }
    for(int i = 1;i<=k;i++){
        cin>>x>>y;
        for(int j = x-2;j<=x+2;j++){
            for(int h = y-2;h<=y+2;h++)
                if(j>=1&&j<=n&&h>=1&&h<=n)
                    nums[h][j] = 1;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(!nums[i][j]) ans++;
        }
    }
    cout<<ans;
    return 0;
}
