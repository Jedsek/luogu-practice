#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,q,opt,i,j,k;
    cin>>n>>q;
    vector< vector<int> > vec(n+1);
    while(q--){
        cin>>opt;
        if(opt==1){
            cin>>i>>j>>k;
            if(vec[i].size()<j+1)
                vec[i].resize(j+1);
            vec[i][j] = k;
            
        }else{
                cin>>i>>j;
                cout<<vec[i][j]<<endl;
        }
    }
    return 0;
}
