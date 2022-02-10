#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int c_i(char ch){
    return '0'<=ch&&ch<='9'?ch-'0':ch-'A'+10;
}
char i_c(int x){
    return x<=9?x+'0':x-10+'A';
}
int num;
int main(){
    int n,temp=0,m;
    string input;
    int output[100];
    cin>>n>>input>>m;
    for(int i = 0;i<input.size();i++){
        temp = temp*n+c_i(input[i]);
    }
    while(temp){
        output[num++] = temp%m,temp/=m;
    }
    for(int i = num-1;i>=0;i--){
        cout<<char(i_c(output[i]));
    }
    return 0;
}
