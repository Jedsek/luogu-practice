#include<iostream>
#include<algorithm>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main(){
    char s[20],first,ans[20];
    string w;
    int n,a,b,c;
    cin>>n;
    getline(cin,w);
    while(n--){
        fgets(s,sizeof(s),stdin);
        if(s[0]>='a'&&s[0]<='z')
            first = s[0],s[0] = ' ';
        sscanf(s," %d%d",&a,&b);
        switch(first){
            case('a'):c=a+b;sprintf(ans,"%d+%d=%d",a,b,c);break;
            case('b'):c=a-b;sprintf(ans,"%d-%d=%d",a,b,c);break;
            case('c'):c=a*b;sprintf(ans,"%d*%d=%d",a,b,c);break;
        }
        printf("%s\n%d\n",ans,int(strlen(ans)));
    }
    return 0;
}
