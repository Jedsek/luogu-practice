#include <iostream>
using namespace std;
int countl;
bool arr[20][20][20];
void find(int *arr1,int *arr2){
	for(int i = arr1[0];i<=arr2[0];i++){
		for(int j = arr1[1];j<=arr2[1];j++){
			for(int k = arr1[2];k<=arr2[2];k++){
				if(!arr[i][j][k]){countl++;arr[i][j][k] = true;}
			}
		}
	}
}
int main(){
	int tiji = 1;
	for(int i = 0,num;i<3;i++){
		cin>>num;tiji*=num;
	}
	int q;	cin>>q;
	int arr1[3],arr2[3];
	for(int i = 0;i<q;i++){
		cin>>arr1[0]>>arr1[1]>>arr1[2]>>arr2[0]>>arr2[1]>>arr2[2];
		find(arr1,arr2);
	}

	cout<<tiji-countl;
	return 0;
}
