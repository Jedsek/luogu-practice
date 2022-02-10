#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int num;
    scanf("%d",&num);
    bool p1,p2;
    p1=num%2==0;
    p2=num>4&&num<=12;
    cout
    <<(p1&&p2)<<' '
    <<(p1||p2)<<' '
    <<(p1^p2)<<' '
    <<!(p1||p2);
    return 0;
}
