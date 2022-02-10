#include <iostream> 
#include <string>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
string s;
int b,g;
int cs(string word){
    int cnt = 0,nextpos = s.find(word,0),len = word.size();
    while(nextpos!=-1){
        cnt++;
        s.replace(nextpos,len,"#");
        nextpos = s.find(word,nextpos+1);
    }
    return cnt;
}
int main(){
    cin>>s;
    b = cs("boy")+cs("bo")+cs("oy")+cs("b")+cs("o")+cs("y");
    g = cs("girl")+cs("gir")+cs("irl")+cs("gi")+cs("ir")+cs("rl")+cs("g")+cs("i")+cs("r")+cs("l");
    cout<<b<<endl<<g;
    return 0;
}
