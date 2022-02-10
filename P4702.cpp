#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long sum;
    cin>>n;
    for(int i = 1,a;i<=n;i++){
        cin>>a;
        sum += a;
        sum%=2;
    }
    if(sum==0) cout<<"Bob";
    else cout<<"Alice"; 
    return 0;
}
