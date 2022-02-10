#include <iostream>
using namespace std;
int min(int a,int b,int c){
    int temp = a<b?a:b;
    return temp<a?temp:a;
}
int max(int a,int b,int c){
    int temp = a>b?a:b;
    return temp>c?temp:c;
}
int gcd(int a,int b){
    if(a<b){
        int temp = a;
        a = b;
        b = temp;
    }
    int yushu = a%b;
    while(yushu!=0){
        a = b;
        b = yushu;
        yushu = a%b;
    }
    return b;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int gcd1 = gcd(max(a,b,c),min(a,b,c));
    cout<<min(a,b,c)/gcd1<<"/"<<max(a,b,c)/gcd1;
    return 0;
}
