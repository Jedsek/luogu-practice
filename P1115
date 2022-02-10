#include <iostream>                                                         
#include <algorithm>                                                        
using namespace std;                                                        
const int maxn = 200005;                                                    
int n;                                                                      
long long  a[maxn],f[maxn];                                                          
int main() {                                                                
    cin >> n;                                                               
    for (int i = 1; i <= n; i++) {   
        cin >> a[i];         
    }                         
    for (int i = 1; i <= n; i++) {
        f[i] = max(0LL, f[i - 1]) + a[i];                     }                                                                       
    long long ans = -1e16;                          
    for (int i = 1; i <= n; i++) { 
        ans = max(ans, f[i]); 
    }                          
    cout << ans;              
    return 0;                   
}                                               
