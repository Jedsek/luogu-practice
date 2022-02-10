#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    unsigned long long m;
    scanf("%lld",&m);
    cout<<m*(m-1)/2*(m-2)/3*(m-3)/4;
    return 0;
}
