#include <iostream>
#include <algorithm>
using namespace std;
char arr[60][60];
int color[60][4];
int main(){
ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>arr[i][j];
            if(arr[i][j]!='W') color[i][1]+=1;
            if( arr[i][j]!='B' )color[i][2]+=1;
            if( arr[i][j]!='R' ) color[i][3]+=1;
        }
    }
    int minn = 10000000;
    for(int i = 1,sum;i<=n-2;i++){
        for(int j = i+1;j<=n-1;j++){
                sum=0;
                for(int a = 1;a<=i;a++) sum+=color[a][1];
                for(int a = i+1;a<=j;a++) sum+=color[a][2];
                for(int a = j+1;a<=n;a++) sum+=color[a][3];
                minn = min(minn,sum);
        }
    }
    cout<<minn;
    return 0;
}
