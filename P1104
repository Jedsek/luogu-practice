#include <iostream>
#include <algorithm>
using namespace std;
struct Stud{
    string name;
    int num,year,month,day;
    
}stud[105];
int cmp(Stud a,Stud b){
    if(a.year!=b.year) return a.year<b.year;
    if(a.month!=b.month) return a.month<b.month;
    if(a.day!=b.day) return a.day<b.day;
    return a.num>b.num;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>stud[i].name>>stud[i].year>>stud[i].month>>stud[i].day;
        stud[i].num = i;
    }
    sort(stud,stud+n,cmp);
    for(int i = 0;i<n;i++){
        cout<<stud[i].name<<endl;
    }
    return 0;
}
