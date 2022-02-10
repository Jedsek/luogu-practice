#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
freopen().
#endif
    int ans = 0;
    string s;
    while(cin>>s){
        ans+=s.size();
    }
    cout<<ans;
    return 0;
}
