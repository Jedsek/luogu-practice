#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
char p;
bool a[25*2500+5];
int fs[2] = {11,21};
char ans[10];
int main(){
    int n = 0;
    while(1){
        cin>>p;
        if(p=='W') a[n++] = 1;
        else if(p=='L') a[n++] = 0;
        if(p=='E') break;
    }
    for(int i = 0;i<2;i++){
        int w = 0,l = 0;
        for(int j = 0;j<n;j++){
            if(a[j]) w++;
            else l++;
            if(max(w,l)>=fs[i]&&abs(w-l)>=2){
                sprintf(ans,"%d:%d",w,l);
                cout<<ans<<endl;
                w = l = 0;
            }
        }
        sprintf(ans,"%d:%d",w,l);
        cout<<ans<<endl<<endl;
    }
    return 0;
}
