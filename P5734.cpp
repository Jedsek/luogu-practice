#include<iostream>
#include<algorithm>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main(){
    int n,l,r;
    string s,a;
    cin>>n>>s;
    while(n--){
        int p;
        cin>>p;
        if(p==1){
            cin>>a;
            s+=a;
            cout<<s<<endl;
        }else if(p==2){
            cin>>l>>r;
            s=s.substr(l,r);
            cout<<s<<endl;
        }else if(p==3){
            cin>>l>>a;
            s.insert(l,a);
            cout<<s<<endl;
        }else{
            cin>>a;
            cout<<(int)s.find(a)<<endl;
        }
    }
    return 0;
}
