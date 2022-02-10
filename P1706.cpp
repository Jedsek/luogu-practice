#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n,arr[10];
    scanf("%d\n",&n);
    for(int i = 0;i<n;i++) arr[i] = i+1;
    do{
        for(int i = 0;i<n;i++)printf("%5d",arr[i]);
        puts("");
    }    while(next_permutation(arr,arr+n));
    return 0;
}
