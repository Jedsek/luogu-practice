#include <iostream> 
#include <string>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int dx[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int ans;
int main(){
    string s;
    getline(cin,s);
    for(int i = 0;i<s.length();i++){
        if(s[i]==' '){
            ans+=1;
        }
        if(s[i]>='a'&&s[i]<='z')ans+=dx[s[i]-'a'];
    }
    cout<<ans;
    return 0;
}
