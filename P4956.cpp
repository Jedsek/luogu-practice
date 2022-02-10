#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int n;cin>>n;
    for(int k = 1;;k++){
        for(int x = 1;x<=100;x++){
            if((7*x+21*k)*52==n){cout<<x<<endl;cout<<k<<endl;return 0;}
        }
    }
    return 0;
}
