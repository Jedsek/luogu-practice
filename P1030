#include <iostream>
#include <string>
using namespace std;
void dfs(string last,string middle){
    if(last.size()<=0)return;
    int m = middle.find(last[last.size()-1]);
    cout<<last[last.size()-1];//root
    dfs(last.substr(0,m),middle.substr(0,m));
    dfs(last.substr(m,last.size()-m-1),middle.substr(m+1));
}
int main(){
    string middle,last;
    cin>>middle>>last;
    dfs(last,middle);
    //system("pause");
    return 0;
}
