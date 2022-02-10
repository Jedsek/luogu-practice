#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a;
	cin>>a;
	double b=0;
	int i=0;
	for(i=0;b<a;i++){
		b+=2*pow(0.98,i);
	}
	cout<<i;
	return 0;
}
