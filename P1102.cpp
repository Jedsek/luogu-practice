#include <iostream>
#include <map>
using namespace std;
map<int,int> Map;
int main(){
    int n,c,a[2000000];
    long long ans = 0;
    cin>>n>>c;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
        Map[a[i]]++;
    }
    for(int i = 1;i<=n;i++){
        ans+=Map[a[i]-c];
    }
    cout<<ans;
    //system("pause");
    return 0;
}
