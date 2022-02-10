#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ans;
int main(){
    ios::sync_with_stdio(false);
    int n,temp;
    cin>>n;
    while(n--){
        cin>>temp;
        ans^=temp;
    }
    cout<<ans;
    return 0;
}
