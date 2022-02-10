#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int m = 0;
    while(num){
        m = m*10+num%10;
        num/=10;
    }
    cout<<m;
   return 0;
}
