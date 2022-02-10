#include <iostream>
using namespace std;
int main(){
	long long int a;
	cin>>a;
	int i=1;
	while(a!=1){
		a /= 2;
		i++;
	}
	cout<<i;
	return 0;
}
