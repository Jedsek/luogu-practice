#include <iostream>
using namespace std;
int main(){
    int nums[11];
    int sum = 0;
    for(int i = 1;i<=10;i++) cin>>nums[i];
    int height; cin>>height; height += 30;
    for(int i = 1;i<=10;i++) if(height>=nums[i]) sum++;
    cout<<sum;
    return 0;
}
