#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    
    int num[4];
    for(int i = 1;i<=3;i++) cin>>num[i];
    sort(&num[1],&num[1]+3);
    
    char num2[4];
    for(int i = 1;i<=3;i++) cin>>num2[i];
    
    cout<<num[num2[1]-'A'+1]<<" "
   	    <<num[num2[2]-'A'+1]<<" "
		<<num[num2[3]-'A'+1];
    return 0;
}
