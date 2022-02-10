#include <iostream>
using namespace std;
int arr[40][40];
int main(){
	int N;	cin>>N;

	int hang = 1,lie = N/2+1;
	arr[hang][lie] = 1;
	for(int i = 2;i<=N*N;i++){
		if(hang==1&&lie!=N){hang = N;arr[N][++lie] = i;}
		else if(hang!=1&&lie==N){lie = 1;arr[--hang][1] = i;}
		else if(hang==1&&lie==N){arr[++hang][lie] = i;}
		else{
			if(arr[hang-1][lie+1]==0){arr[--hang][++lie] = i;}
			else {arr[++hang][lie] = i;}
		}
       
	}
	
	for(int i = 1;i<=N;i++){
		for(int j = 1;j<=N;j++) cout<<arr[i][j]<<" ";
		cout<<endl;		
	}
	return 0;
}
