#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
struct Bigint{
    int len,a[5050];
    Bigint(){memset(a,0,sizeof(a));}
    Bigint(string x){
        memset(a,0,sizeof(a));
        len=1;
        for(int i = x.size()-1;i>=0;i--,len++) a[len] = x[i]-'0';
        len--;
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
        for(int i = 1;i<=lenn;i++)
            c[i] = a[i]+b[i];
        c.flatten(lenn+1);
        return c;
    }
    friend Bigint operator*(Bigint a,Bigint b){
        Bigint c;
        int lena = a.len,lenb = b.len;
        for(int i = 1;i<=lena;i++)
            for(int j = 1;j<=lenb;j++)
                c[i+j-1] += a[i]*b[j];
        c.flatten(lena+lenb);
    return c;
    }    
    friend Bigint operator*(Bigint a,int b){
        Bigint c;
        int lena = a.len;
        for(int i = 1;i<=lena;i++)
                c[i] = a[i]*b;
        c.flatten(lena+11);
    return c;
    }
    void print(){
        for(int i = len;i>=1;i--)cout<<a[i];
    }
};
int main(){
    string aa,bb;
    aa = "0",bb = "1";
    int n;
    cin>>n;
    Bigint ans(aa),fac(bb);
    for(int i = 1;i<=n;i++){
        fac = fac*i;
        ans = ans+fac;
    }
    ans.print();
    return 0;
}
