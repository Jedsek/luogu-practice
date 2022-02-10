#include <iostream>
using namespace std;
int main(){
    char nums[5];
    char ans[5];
    for(int i = 0;i<5;i++){
        cin>>nums[i];
        ans[4-i]=nums[i];
    }
    for(int x = 0;x<5;x++) cout<<ans[x];
}
