#include <iostream>
using namespace std;
const int maxn = 500;
int n,na,nb,a[maxn],b[maxn],ansa,ansb;
int gm[5][5] = 
{
    {0,0,1,1,0},
    {1,0,0,1,0},
    {0,1,0,0,1},
    {0,0,1,0,1},
    {1,1,0,0,0}
};
int main(){
    cin>>n>>na>>nb;
    for(int i = 0;i<na;i++) cin>>a[i];
    for(int i = 0;i<nb;i++) cin>>b[i];
    for(int i = 0;i<n;i++){
        ansa+=gm[ a[i%na] ][ b[i%nb] ];
        ansb+=gm[ b[i%nb] ][ a[i%na] ];
    }
    cout<<ansa<<' '<<ansb;
    return 0;
}
