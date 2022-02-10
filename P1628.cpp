#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(string a,string b){
    return a<b;
}
string arr[100005];
int n;
string opt;

int main(){
    cin>>n;
    for(int i = 1;i<=n;i++)cin>>arr[i];
    sort(arr+1,arr+1+n,cmp);
    cin>>opt;
    for(int i = 1;i<=n;i++){
        if(arr[i].substr(0,opt.size())==opt) cout<<arr[i]<<endl;
    }
    //system("pause");
    return 0;
}
