
#include <iostream> 
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
struct Bigint{
    int len,a[2000];
    
    Bigint(int x = 0){
        memset(a,0,sizeof(a));
        for(len = 1;x;len++){
            a[len] = x%10;
            x/=10;
        }
        len--;
    }
    int &operator[](int x){
        return a[x];
    }
    void flatten(int L){
        len = L;
        for(int i = 1;i<=len;i++){
            a[i+1] += a[i]/10,a[i]%=10;
        }
        for(;!a[len]&&len>1;len--);
    }
    void print(){
        for(int i = len;i>=1;i--)cout<<a[i];
    }
    friend Bigint operator+(Bigint a,Bigint b){
        Bigint c;
        int lenn = max(a.len,b.len);
        for(int i = 1;i<=lenn;i++){
            c[i] += a[i]+b[i];
        }
        c.flatten(lenn+1);
        return c;
    }
   friend Bigint operator*(Bigint a,Bigint b){
        Bigint c;
        int lena = a.len,lenb = b.len;
        for(int i = 1;i<=lena;i++){
            for(int j = 1;j<=lenb;j++)
                c[i+j-1] += a[i]*b[j];
        }
        c.flatten(lena+lenb+1);
        return c;
    }
};
int main(){
    Bigint f[1010];
    int m,n;
    cin>>m>>n;
    f[m] = Bigint(1),f[m+1] = Bigint(1);
    for(int i = m+2;i<=n;i++){
        f[i] = f[i-1]+f[i-2];
    }
    f[n].print();
    return 0;
}

