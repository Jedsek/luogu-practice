#include <iostream>
#include <algorithm>
using namespace std;
//z=0->顺时针->(x,y)->(y,-x)
//z=1->逆时针->(x,y)->(-y,x)
int n,m,x,y,r,z;
int nums[505][505],a[505][505];
void filling(){
    for(int i = 1,cnt = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            nums[i][j] = cnt++;
}
void shun(){
    for(int i =-r;i<=r;i++)
        for(int j = -r;j<=r;j++)
            nums[x+j][y-i] = a[x+i][y+j];
}
void ni(){
    for(int i =-r;i<=r;i++)
        for(int j = -r;j<=r;j++)
            nums[x-j][y+i] = a[x+i][y+j];
}
void output(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<nums[i][j]<<' ';
        }
        cout<<endl;
    }
}
void same(){
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            a[i][j] = nums[i][j];
}
int main(){
ios::sync_with_stdio(false);
    cin>>n>>m;
    filling();
    //output(n); 
    for(int i = 1;i<=m;i++){
        cin>>x>>y>>r>>z;
        same();
        if(z==0)shun();
        if(z==1)ni();
    }
    output();
    return 0;
}
