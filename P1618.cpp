#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
    int arr[10],x,y,z;
    bool flag = false;
    int A,B,C;
    cin>>A>>B>>C;
    for(int i = 1;i<=9;i++)arr[i] = i;
    do{
        x = arr[1]*100+arr[2]*10+arr[3];
        y = arr[4]*100+arr[5]*10+arr[6];
        z = arr[7]*100+arr[8]*10+arr[9];
        if(x*B==y*A&&y*C==z*B)
            printf("%d %d %d\n",x,y,z),flag = true;
    }while(next_permutation(arr+1,arr+10));
    if(!flag)printf("No!!!");
    return 0;
}
