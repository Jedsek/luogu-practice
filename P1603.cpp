#include<iostream>
#include<algorithm>
using namespace std;
string yw[30]={"","one","two","three","four","five","six","seven",
"eight","nine","ten","elven","twelve","thirteen","fourteen","fifteen",
"sixteen","seventeen","eighteen","nineteen","twenty","a","both",
"another","first","second","third"}; 
int sz[30]={0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,
1,4,1,1,4,9};
int k;
int a[10];
int main(){
    for(int j = 1;j<=6;j++){
        string s;
        cin>>s;
        for(int i = 1;i<=26;i++){
            if(yw[i]==s){
                a[k++] = sz[i];
                break;
            }
        }
    }
        if(k==0){cout<<0;return 0;}
        sort(a,a+k);
        for(int i = 0;i<k;i++){
            if(i!=0&&a[i]<10)cout<<0;
            cout<<a[i];
        }
    return 0;
}
