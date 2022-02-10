#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p = 1.0/2*(a+b+c);
    printf("%0.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
    //float a = 0.1;
    //printf("%d",int(2-a*a*100));
    //printf("%.10f",2-a*a*100);
    return 0;
}
