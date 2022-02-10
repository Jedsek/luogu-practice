#include <iostream>
#include <iomanip>
using namespace std;
double fbnq(int n){
	if(n==1||n==2) return 1;
	double a3 = 0;
	for(double i = 3,a1 = 1,a2 = 1;i<=n;i++){
		a3 = a1+a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}
int main(){
	int n;
	cin>>n;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<fbnq(n);
	return 0;
}
