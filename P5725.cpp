#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n*n;i++){
        printf("%02d",i);
        if(i%n==0){cout<<endl;}
    }cout<<endl;
    for(int k = 1,cnt=1;k<=n;k++){
        printf("%*s",2*(n-k),"");
        for(int j = 1;j<=k;j++){
            printf("%02d",cnt++);
        }
        cout<<endl;
    }
   return 0;
}
