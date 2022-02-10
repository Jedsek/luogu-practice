#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;
int main(){
    char s[100];
    scanf("%s",s);
    int i = 100;
    while(i--){
        if(s[i]>='a'&&s[i]<='z') s[i] = s[i]-'a'+'A';
    }
    cout<<s;
    return 0;
}
