#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int k;cin>>k;
    int day = 0,coin = 0;
    for(int i = 1;;i++){
        for(int j = 1;j<=i;j++){
            day++;
            coin += i;
            if(day==k) {cout<<coin;return 0;}
        }
    }
    
   return 0;
}
