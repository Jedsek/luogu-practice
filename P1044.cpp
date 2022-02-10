#include <iostream>
using namespace std;
int h[30]={1,1},n;
int main(){
    cin>>n;
    for(int i = 2;i<=n;i++){
        for(int j = 1;j<=n;j++){
            h[i] += h[j-1]*h[i-j];
        }
    }
    cout<<h[n];
    return 0;
}
