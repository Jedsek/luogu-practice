#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int n,l;
    cin>>n;
    for(int i = 1,cnt = 0;cnt<n*n;i++){
        cin>>l;
        if(i%2){
            while(l--){
                cout<<0;
                cnt++;
                if(cnt%n==0) cout<<endl;
            }
        }
        else{
            while(l--){
                cout<<1;
                cnt++;
                if(cnt%n==0) cout<<endl;
            }
        }
    }
    
    return 0;
}
