#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
struct Zb{
    double x,y,z;
}zb[50005];
double pf(double x){
    return x*x;
}
double distance(double x,double y,double z,double xx,double yy,double zz){
    return sqrt( pf(x-xx)+pf(y-yy)+pf(z-zz) );
}
bool cmp(Zb a,Zb b){
    return a.z>b.z;
}
using namespace std;
int main(){
    int n;
    double ans = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>zb[i].x>>zb[i].y>>zb[i].z;
    sort(zb,zb+n,cmp);
    for(int i = 0;i<n-1;i++){
        ans+=distance( zb[i].x,zb[i].y,zb[i].z,zb[i+1].x,zb[i+1].y,zb[i+1].z );
    }
    printf("%.3f",ans);
    return 0;
}
