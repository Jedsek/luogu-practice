#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    int n;
    cin>>n;
    cin>>a;
    n--;
    while(n--){
        string s;
        cin>>s;
        int x = a.find(s[0]);
        a.erase(x,1);
        a.insert(x,s);
    }
    for(int i = 0;i<a.size();i++){
        if(a[i]=='*')continue;
        cout<<a[i];
    }
    //system("pause");
    return 0;
}
