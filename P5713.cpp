#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int x;
    cin>>x;
    bool p = 5*x-(3*x+11)<=0;
    if(p){cout<<"Local";}
    else cout<<"Luogu";
    return 0;
}
