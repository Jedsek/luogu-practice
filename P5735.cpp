#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
double pf(double x){
    return x*x;
}
int main(){
    double x[3],y[3],ans = 0;
    for(int i = 0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    for(int i = 0;i<2;i++){
        for(int j = i+1;j<3;j++){
            ans+=sqrt(pf(x[i]-x[j])+pf(y[i]-y[j]));
        }
    }
    printf("%.2f",ans);
    return 0;
}
