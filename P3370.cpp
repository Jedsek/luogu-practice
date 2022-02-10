#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int mod = 10010;
const int base = 260;
vector<string> vec[mod];
int ans = 0;
void insert(string& s){
    int hash = 1;
    for(int i = 0;i<s.size();i++)
        hash = (hash*1ll*base+s[i])%mod;
        string t = s;
    for(int i = 0;i<vec[hash].size();i++)
        if(t==vec[hash][i]) return;
    vec[hash].push_back(t);
    ans++;
}
int main(){
    int n;
    string s;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>s;
        insert(s);
    }
    cout<<ans;
    //system("pause");
    return 0;
}
