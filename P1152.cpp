#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n,arr[1000],ans,b[1000];
bool flags[1000];
int main(){
    int len;
    cin>>len;
    for(int i=0;i<=len-1;i++)cin>>arr[i];
    //cout<<len;
    for(int i = 0;i<len-1;i++){
        if( abs(arr[i]-arr[i+1])>=1 && abs(arr[i]-arr[i+1])<=len-1 )
            flags[ abs(arr[i]-arr[i+1]) ] = true;
    }
    for(int i = 1;i <= len-1;i++)
        if(!flags[i]){
            cout<<"Not jolly";
            return 0;
        }
    cout<<"Jolly";
    return 0;
}
