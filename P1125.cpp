#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int maxn = -1,minn = 10000;
    char s[110];
    int az[26] = {0};
    cin>>s;
    for(int i = 0;s[i]!='\0';i++){
        az[s[i]-'a']++;
    }
    for(int i = 0;i<26;i++){
        maxn = maxn<az[i]?az[i]:maxn;
        if(az[i])minn = minn>az[i]?az[i]:minn;
    }
    int j = maxn-minn;
    if(j==0||j==1){
        cout<<"No Answer"<<endl<<0;
        return 0;
    }
    for(int i = 2;i*i<=j;i++){
        if(j%i==0){
            cout<<"No Answer"<<endl<<0;
            return 0;
        }
    }
    cout<<"Lucky Word"<<endl<<j;
    return 0;
}
