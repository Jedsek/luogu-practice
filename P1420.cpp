#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    int now,num;
    cin>>now;
    n--;
    int ans = 1;
    int l = 1;
    while(n--){
        cin>>num;
        if(now == num-1){
            l++;
        }
        else{
            ans = max(ans,l);
            l = 1;
        }
        now = num;
    }
    cout<<ans;
   return 0;
}
