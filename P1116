#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n,arr[1000],ans;
int main(){
    cin>>n;
    for(int i = 0;i<n;i++)cin>>arr[i];
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]),ans++;
    }
    cout<<ans;
    return 0;
}
