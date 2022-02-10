//floyd

#include <iostream>
#include <algorithm>
using namespace std;
int n,s[105][105],p[105];
const int INF = 1e9;
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j) s[i][j] = 0;
             else s[i][j] = INF;
        }
    }
    for(int i = 1,a,b;i<=n;i++){
        cin>>p[i];
        cin>>a>>b;
        if(a) s[a][i] = s[i][a] = 1;
        if(b) s[b][i] = s[i][b] = 1;
    }
    for(int k = 1;k<=n;k++){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                
                    s[i][j] = min(s[i][j],s[i][k]+s[k][j]);
            }
        }   
    }
    int m = 1e9;
    for(int i = 1;i<=n;i++){
        int tot = 0;
        for(int j = 1;j<=n;j++){
            tot+=s[i][j]*p[j];
        }
        m = min(m,tot);
    }
    cout<<m;
    //system("pause");
    return 0;
}
