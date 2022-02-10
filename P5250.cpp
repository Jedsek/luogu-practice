#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> Set;
    int n;
    cin>>n;
    for(int i = 1,a,x,numbefore,numafter;i<=n;i++){
        cin>>a>>x;
        if(a==1){
            //can't to find x;
            if(!Set.count(x)) Set.insert(x);
            else cout<<"Already Exist"<<endl;
        }
        else{
            if(Set.empty()) cout<<"Empty"<<endl;
            else{
                set<int>::iterator j = Set.lower_bound(x);
                if(j==Set.end()) cout<<*(--j)<<endl,Set.erase(j);
                else if(j==Set.begin()) cout<<*(j)<<endl,Set.erase(j);
                else{
                    numafter = *(j);
                    numbefore = *(--j);
                    if(numafter-x<x-numbefore) cout<<numafter<<endl,Set.erase(numafter);
                    else cout<<numbefore<<endl,Set.erase(numbefore);
                }
            }
        }
    }
    //system("pause");
    return 0;
}
