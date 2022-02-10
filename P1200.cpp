#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int nums[10][10],n;
string a,b;
int main(){
    cin>>a>>b;
    long long int aa = 1,bb = 1;
    for(int i = 0;i<a.length();i++){
        aa*=int(a[i]-'A'+1);
    }
    for(int i = 0;i<b.length();i++){
        bb*=int(b[i]-'A'+1);
    }
    aa%=47;
    bb%=47;
    if(aa==bb){
        cout<<"GO";
    }else{
        cout<<"STAY";
    }
    return 0;
}
