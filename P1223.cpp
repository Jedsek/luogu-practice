#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct Arr{
    int num,v;
}arr[1050];
bool cmp(Arr a,Arr b){
    if(a.v!=b.v)return a.v<b.v;
    return a.num<b.num;
}
int main(){
    int n;
    double s = 0;
    cin>>n;
    for(int i = 0;i<n;i++)cin>>arr[i].v,arr[i].num = i;
    sort(arr,arr+n,cmp);
    for(int i = 0;i<n;i++){
        cout<<arr[i].num+1<<' ';
        s+=(n-i-1)*arr[i].v;
    }
    printf("\n%.2f",s/n);
    return 0;
}
