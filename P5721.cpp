#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1,cnt=1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++,cnt++){
            printf("%02d",cnt);
        }
        cout<<endl;
    }
    return 0;
}
