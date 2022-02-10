#include <iostream>
using namespace std;
int main(){
    int X,N;
    cin>>X>>N;
    int sum = 0;
    for(int i = X;N!=0;N--){
        if(i==7){
            i=1;
            continue;
        }
        if(i<=5) sum += 250;
        i++;
    }
    cout<<sum;
    return 0;
}
