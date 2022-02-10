#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int m,t,s;
    scanf("%d%d%d",&m,&t,&s);
    if(t==0) cout<<0;
    else{
        int e = ceil(s*1.0/t);
        cout<<((m-e)+abs(m-e))/2;
    }
    return 0;
}
