#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double sum;
    cin>>sum;
    double a=0,b=0,c=0;
    if(sum<=150){
        sum = sum*0.4463;
    }
    if(sum<=400&&sum>=151){
        sum = 150*0.4463+(sum-150)*0.4663;
    }
    if(sum>=401){
        sum = 150*0.4463+(400-150)*0.4663+(sum-400)*0.5663;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<sum;
    return 0;
}
