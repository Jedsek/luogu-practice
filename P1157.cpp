#include <iostream>
#include <string>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int n,r;
struct node{
    int v[21];
}arr[100000];
bool cmp(node a,node b){
    for(int i = 0;i<r;i++){
        if(a.v[i]!=b.v[i])return a.v[i]<b.v[i];
    }
    return false;
}
int num;
int main(){
    
    cin>>n>>r;
    for(int S = (1<<n)-1;S>=0;S--){
        if(__builtin_popcount(S)==r){
            int k = 0;
            for(int i = 0;i<n;i++){
                if(1<<i&S){
                     arr[num].v[k++] = i+1;
                } 
            }
            num++;
        }
    }
    sort(arr,arr+num,cmp);
    for(int i = 0;i<num;i++){
        for(int j = 0;j<r;j++)
            printf("%3d",arr[i].v[j]);
        cout<<endl;
    }
    return 0;
}
