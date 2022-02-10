#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int now_num;	cin>>now_num;
	int max = now_num,min = now_num;;
	for(int i = 2;i<=n;i++){
		cin>>now_num;
		if(now_num>max) max = now_num;
		if(now_num<min) min = now_num;
	}
	cout<<max-min;;
	return 0;
}
