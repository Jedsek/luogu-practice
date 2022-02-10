#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int  a,b,c,ans=0;
    scanf("%d%d%d",&a,&b,&c);
    ans = int(a*0.2+b*0.3+c*0.5);
    printf("%d",ans);
    return 0;
}
