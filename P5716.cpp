#include <iostream>
using namespace std;
int main(){
    int year,month;
    cin>>year>>month;
    int nums[13] = {1,31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%400==0||(year%4==0&&year%100!=0)) nums[2]++;
    cout<<nums[month];
    return 0;
}
