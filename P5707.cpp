#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    double s,v;
    cin>>s>>v;
    int ans = 60*32-ceil(s/v)-10;
    printf("%02d:%02d",ans/60%24,ans%60);
    return 0;
}
