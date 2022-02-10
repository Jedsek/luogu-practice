#include <iostream>
using namespace std;
int arr[9990000];
int main(){
	int a,b;
	cin>>a>>b;
	if(b>9990000)b=9990000;
	for(int i=2,m,n,j;i<=b;i++){
		if(!arr[i]){
			for(j=i;j<=b;j+=i){
				arr[j]=1;
			}
			if(i>=a){
				m=i;n=0;
				while(m){
					n=n*10+m%10;
					m/=10;
				}
				if(n==i)cout<<i<<endl;
			}
		}
	}

	return 0;
}
