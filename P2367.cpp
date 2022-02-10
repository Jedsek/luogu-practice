#include <iostream>
using namespace std;
#define MAXN 5000005
int a[MAXN],b[MAXN];
int n,p;
/**
void co(){
	for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
**/
int main(){
	ios::sync_with_stdio(NULL);
	cin>>n>>p;

	for(int i = 1;i<=n;i++){
		cin>>a[i];
		b[i] = a[i]-a[i-1];
	}
	int l,r,change;
	for(int i = 1;i<=p;i++){
		cin>>l>>r>>change;
		b[l] += change;
		b[r+1] -= change;
	}
	a[1] = a[0]+b[1];
	int ans = a[1];
	for(int i = 2;i<=n;i++){
		a[i] = a[i-1]+b[i];
		if(ans>a[i]) ans = a[i];
	}
	cout<<ans;
	return 0;
} 
