#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count = 0;
	int arr[1000][3];

	for(int i = 0;i<=n;i++){
		for(int j = 0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0,j,num = 0;i<=n;i++){
		for(j = i+1;j<n;j++){
            num = abs(arr[i][0]+arr[i][1]+arr[i][2]-arr[j][0]-arr[j][1]-arr[j][2]);
			if(abs(arr[i][0]-arr[j][0])<=5&&
				abs(arr[i][1]-arr[j][1])<=5&&
				abs(arr[i][2]-arr[j][2])<=5&&
				num<=10
			  ) count++;
		}
	}
	cout<<count;
	return 0;
}
