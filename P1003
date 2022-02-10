#include <iostream>
using namespace std;
const int maxn = 10005;
int a[maxn],b[maxn],g[maxn],k[maxn];
bool ok; 
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	int x,y;
	cin>>x>>y;
	for(int i = n;i>=1;i--){
		if(x>=a[i]&&y>=b[i]&&x<=a[i]+g[i]&&y<=b[i]+k[i]){
			ok = true;cout<<i;break;
		}
	}
	if(!ok)cout<<-1;
	return 0;
}
