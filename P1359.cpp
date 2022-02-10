#include <iostream>
#include <algorithm>
using namespace std;
int s[203][203],n;
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            if(i==j) s[i][j] = 0;
            else s[i][j] = 1e9;
    for(int i = 1;i<n;i++){
        for(int j = i+1;j<=n;j++){
            cin>>s[i][j];
        }
    }
    for(int k = 1;k<=n;k++){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                s[i][j] = min(s[i][j],s[i][k]+s[k][j]);
            }
        }
    }
    cout<<s[1][n];
    //system("pause");
    return 0;
}
