#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
struct STUD{
    string name;
    int a,b,c,sum;
    void ssum(){sum = a+b+c;}
}stud[1000];
bool check(int a,int b,int m){
    if(abs(a-b)<=m)return true;
    return false;
}
int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>stud[i].name>>stud[i].a>>stud[i].b>>stud[i].c;
        stud[i].ssum();
    }
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(check(stud[i].a,stud[j].a,5))
                if(check(stud[i].b,stud[j].b,5))
                    if(check(stud[i].c,stud[j].c,5))
                        if(check(stud[i].sum,stud[j].sum,10)){
                            cout<<stud[i].name<<' '<<stud[j].name<<endl;
                        }
        }
    }
    return 0;
}
