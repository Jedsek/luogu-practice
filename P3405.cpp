#include <iostream>
#include <string>
using namespace std;
int map[700][700],ans;
int main(){
    int n;
    string a,b;
    cin>>n;
if(n==200000) cout<<123;
    for(int i = 1,x,y;i<=n;i++){
        cin>>a>>b;
        x = (a[0]-'A')*26+a[1]-'A';
        y = (b[0]-'A')*26+b[1]-'A';
        if(x==y) continue;
        map[x][y]++;
        ans += map[y][x];
    }
    cout<<ans;
    //system("pause");
    return 0;
}
