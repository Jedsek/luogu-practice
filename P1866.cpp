#include <iostream>
#include <algorithm>
using namespace std;
const int mode = 1000000007;
int main(){
    long long n,num[100];
    long long ans = 1;
    cin>>n;
    for(long long i = 1;i<=n;i++)
        cin>>num[i];
    sort(num+1,num+1+n);
    for(long long i = 1;i<=n;i++){
        ans *= num[i]-i+1;
        ans%=mode;
    }
    cout<<ans;
    //system("pause");
    return 0;
}
