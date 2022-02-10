#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    int len,q;
    cin>>len>>q;
    while(len--){
        int tmp;
        cin>>tmp;
        vec.push_back(tmp);
    }
    while(q--){
        int tmp;
        cin>>tmp;
        cout<<vec[tmp-1]<<endl;
    }
    
    return 0;
}
