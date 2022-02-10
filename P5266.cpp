#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int q,opt,score,sum = 0;
    string name;
    map<string,int> Map;
    cin>>q;
    for(int i = 1;i<=q;i++){
        cin>>opt;
        if(opt==1){
            cin>>name>>score;
            if(!Map[name]) sum++;
            Map[name] = score;
            cout<<"OK"<<endl;
        }else if(opt==2){
            cin>>name;
            if(Map[name]) cout<<Map[name]<<endl;
            else cout<<"Not found"<<endl;
        }else if(opt==3){
            cin>>name;
            if(Map[name]){
                Map[name] = 0;
                sum--;
                cout<<"Deleted successfully"<<endl;
            }else
                cout<<"Not found"<<endl;
        }else{
            cout<<sum<<endl;
        }
    }
    //system("pause");
    return 0;
}
