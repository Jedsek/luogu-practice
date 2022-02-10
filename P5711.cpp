#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int x;bool p;
    cin>>x;
    p = x%4==0&&x%100!=0||x%400==0;
    cout<<p;
    return 0;
}
