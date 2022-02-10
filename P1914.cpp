#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = '0';
    while(cin>>ch)putchar((ch-'a'+n)%26+'a');
    return 0;
}
