#include <iostream>
#include <map>
using namespace std;
map<int,int> Map;
int main(){
    int n,q,opt;
    cin>>n;
    for(int i = 1,num;i<=n;i++){
        cin>>num;
        Map[num] = i;
    }
    cin>>q;
    while(q--){
        cin>>opt;
        cout<<Map[opt]<<endl;
    }
    //system("pause");
    return 0;
}
