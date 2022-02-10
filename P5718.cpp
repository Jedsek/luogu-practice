#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number,min = 1001;
    for(int i = 1;i<=n;i++){
        cin>>number;
        if(number<min) min = number;
    }
    cout<<min;
    return 0;
}
