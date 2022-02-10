#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double m;   cin>>m;
    double h;   cin>>h;
    double result = m/(h*h);
    if(result<18.5) cout<<"Underweight";
    else if(result>=18.5&&result<24)    cout<<"Normal";
    else cout<<setprecision(6)<<result<<endl<<"Overweight";
    return 0;
}
