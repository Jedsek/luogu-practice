#include <iostream>
#include <string>
using namespace std;
string front,middle;
void dfs(string front,string middle){
    if(front.size()<=0) return;
    int m = middle.find(front[0]);
    dfs(front.substr(1,m),middle.substr(0,m));
    dfs(front.substr(m+1),middle.substr(m+1));
    cout<<front[0];
}
int main(){
   
    cin>>middle>>front;//分别输入中序遍历与前序遍历
    dfs(front,middle);
    //system("pause");
    return 0;
}
