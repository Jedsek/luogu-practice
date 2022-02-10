#include <iostream>
using namespace std;
int arr[10];
int main(){
	int num1,num2;
	cin>>num1>>num2;
	for(int i = num1,j;num1<=num2;num1++,i = num1){
		while(i){
			j = i%10;
			i/=10;
			arr[j]++;
		}
	}
	for(int i = 0;i<=9;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
