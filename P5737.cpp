#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int l,r;
int nums[1000];
int cnt;
void init(){cin>>l>>r;}
void doit(){
    while(l<=r){
        if(!(l%400)||(!(l%4)&&(l%100))) nums[cnt++]=l;
        l++;
    }
}
void putit(){
    cout<<cnt<<endl;
    for(int i = 0;i<cnt;i++){
        cout<<nums[i]<<' ';
    }
}
int main(){
    init();
    doit();
    putit();
    return 0;
}
