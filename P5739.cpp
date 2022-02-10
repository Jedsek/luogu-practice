#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int jc(int n){
    if(n == 1)return 1;
    return n*jc(n-1);
}
int main(){
    cin>>n;
    cout<<jc(n);
    return 0;
}
