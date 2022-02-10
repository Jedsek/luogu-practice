#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Bigint{
    int len,a[2000];
    Bigint(int x=0){
        memset(a,0,sizeof(a));
        for(len = 1;x;len++)
            a[len] = x%10,x/=10;
        len--;
        len = max(1,len);
    }
    int &operator[](int i){
        return a[i];
    }
    void flatten(int L){
        len = L;
        for(int i = 1;i<=len;i++){
            a[i+1] += a[i]/10,a[i]%=10;
        }
        for(;!a[len]&&len>1;len--);
    }
    friend Bigint operator+(Bigint a,Bigint b){
        Bigint c;
        int lenn = max(a.len,b.len);
        for(int i = 1;i<=lenn;i++){
            c[i] = a[i]+b[i];
        }
        c.flatten(lenn+1);
        return c;
    }
    friend Bigint operator*(Bigint a,Bigint b){
        Bigint c;
        int lena = a.len,lenb = b.len;
        for(int i = 1;i<=lena;i++){
            for(int j = 1;j<=lenb;j++)
                c[i+j-1]+=a[i]*b[j];
        }
        c.flatten(lena+lenb);
        return c;
    }
    void print(){
        for(int i = len;i>=1;i--)cout<<a[i];
    }
};
int main(){
    int n;
    cin>>n;
    Bigint f[5010];
    f[0] = Bigint(0),f[1] = Bigint(1),f[2] = Bigint(2);
    for(int i = 3;i<=n;i++)
        f[i] = f[i-1]+f[i-2];
    f[n].print();
    return 0;
}
