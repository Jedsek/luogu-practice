#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
struct STU{
    string name;
    int a,b,c;
    int sum;
    void summ(){sum = a+b+c;}
    void putit(){
        cout<<name<<' '<<a<<' '<<b<<' '<<c<<' ';
    }
};
int main(){
    STU stud[1000];
    int n;
    cin>>n;
    int maxscore = -100,Index;
    for(int i = 0;i<n;i++){
        cin>>stud[i].name;
        cin>>stud[i].a>>stud[i].b>>stud[i].c;
        stud[i].summ();
        if(maxscore>stud[i].sum) Index = i;
    }
    stud[Index].putit();
    return 0;
}
