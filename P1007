#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int l,n,a;
	int minn = 0,maxn = 0;
	cin>>l>>n;
	for(int i = 1;i<=n;i++){
		cin>>a;
		minn = max(minn,min(a,l-a+1));
		maxn = max(maxn,max(a,l-a+1));
	}
	cout<<minn<<" "<<maxn;
	return 0;
}
