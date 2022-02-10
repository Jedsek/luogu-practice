#include <iostream>
#include <map>
using namespace std;
map<string,string> Map;
string find(string& x){
    return Map[x]==x?x:(Map[x] = find(Map[x]));
}
int main(){
    char ch;
    string n1,n2;
    while(cin>>ch&&ch!='$'){
        if(ch=='#'){
            cin>>n1;
            if(Map[n1].empty())Map[n1] = n1;
        }else if(ch=='+'){
            cin>>n2;
            Map[n2] = n1;
        }else{
            cin>>n2;
            cout<<n2<<" "<<find(n2)<<endl;
        }
    }
    //system("pause");    
    return 0;
}
