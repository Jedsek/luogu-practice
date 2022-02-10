#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int x,y,z;
	do{
		x = arr[0]*100+arr[1]*10+arr[2];
		y = arr[3]*100+arr[4]*10+arr[5];
		z = arr[6]*100+arr[7]*10+arr[8];
		if(6*x==3*y&&3*y==2*z){
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
	}while(next_permutation(arr,arr+9));
	return 0;
}
