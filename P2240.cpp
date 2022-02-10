#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
typedef double d;
struct BW{
	d p;
	d w;
	d xjb;
	void init(){xjb = p/w;}
};
bool cmp(BW bw1,BW bw2){
	if(bw1.xjb>bw2.xjb) return true;
	else return false;
}
int main(){
	BW bw[105];
	d n,t;
	cin>>n>>t;
	d sum = 0;
	for(int i = 1;i<=n;i++){
		cin>>bw[i].w>>bw[i].p;
		bw[i].init();	
	}
	sort(bw+1,bw+int(n)+1,cmp);
	for(int i = 1;i<=n;i++){
		if(t>=bw[i].w){
			t-=bw[i].w;
			sum+=bw[i].p;
		}
		else{
			sum+=t*bw[i].xjb;
			break;
		}
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum;
	return 0;
}
