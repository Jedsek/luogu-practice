#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num;
	double sum = 0;
	int n;
	cin>>n;
	int max = 0,min = 10;
	for(int i = 1;i<=n;i++){
		cin>>num;
		if(max<num) max = num;
		if(min>num) min = num;
		sum+=num;
	}
	sum-=max+min;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<(int(sum/(n-2)*100+0.5))/100.0;
	return 0;
}
