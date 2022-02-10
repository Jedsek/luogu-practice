#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
struct STUD{
    int num;
    double a,b,sum,zh;
    void ssum(){sum = a+b;}
    void zzh(){zh = 0.7*a+0.3*b;}
}stud[1000];
bool check(STUD w){
    if(w.sum>140&&w.zh>=80)return true;
    return false;
}
int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>stud[i].num>>stud[i].a>>stud[i].b;
        stud[i].ssum();
        stud[i].zzh();
        if(check(stud[i]))
            cout<<"Excellent"<<endl;
        else
            cout<<"Not excellent"<<endl;
    }
    return 0;
}
