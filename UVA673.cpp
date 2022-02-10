#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
char tains(char ch){
    if(ch==')')return '(';
    if(ch==']')return '[';
    return '\0';
}
int main(){
    stack<char> s;
    int n;
    string p;
    cin>>n;
    getline(cin,p);
    while(n--){
        getline(cin,p);
        while(!s.empty())s.pop();//clear all
        for(int i = 0;i<p.size();i++){
            if(s.empty())
                s.push(p[i]);
            else{
                if(tains(p[i])==s.top())
                    s.pop();
                else 
                    s.push(p[i]);
            }
        }
        if(s.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
