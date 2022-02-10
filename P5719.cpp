#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    double ans = (((1+n/k)*(n/k))/2.0)*k;
    printf("%.1f %.1f",ans/(n/k),(((1+n)*n)/2.0-ans)/(n-(n/k))*1.0);
    
    return 0;
}
