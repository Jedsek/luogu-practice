#include <iostream>
#include <algorithm>
using namespace std;
int ans;
struct Milk{
	int p;
	int w;
};
bool cmp(Milk a,Milk b){
	if(a.p<b.p) return true;
	else return false;
}
int main(){
	Milk milk[6000];
	int n,m;	cin>>n>>m;
	for(int i = 1;i<=m;i++){
		cin>>milk[i].p>>milk[i].w;
	}
	sort(milk+1,milk+1+m,cmp);
	for(int i = 1;i<=n;i++){
		if(n>=milk[i].w){
			n -= milk[i].w;
			ans += milk[i].p*milk[i].w;
		}
		else{
			ans += n*milk[i].p;
			break;
		}
	}
	cout<<ans;
	return 0;
} 
