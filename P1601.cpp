#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
struct Bigint{
    int len,a[100];
    Bigint(){memset(a,0,sizeof(a));}
    Bigint(string x){
        memset(a,0,sizeof(a));
        len=1;
        for(int i = x.size()-1;i>=0;i--,len++) a[len] = x[i]-'0';
        len=len-1;
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
    void print(){
        for(int i = len;i>=1;i--)cout<<a[i];
    }
};
int main(){
    string aa,bb;
    cin>>aa>>bb;
    Bigint a(aa),b(bb),c;
    c = a+b;
    c.print();
    return 0;
}
