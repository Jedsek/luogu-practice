#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int l;
    cin>>l;
    int ans = 0;
    for(int i = 2,sum = 0;;i++){
        bool p = true;
        for(int j = 2;j*j<=i;j++){
            if(i%j==0){p=false;break;}
        }
        if(!p) continue;
                if(sum+i>l) {cout<<ans;return 0;}
        cout<<i<<endl;ans++;sum+=i;

    }
   return 0;
}
